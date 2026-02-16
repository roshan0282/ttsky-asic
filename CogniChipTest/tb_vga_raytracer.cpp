// Verilator C++ Testbench for VGA Raytracer
// Captures VGA output and saves as PPM image

#include "Vvga_raytracer.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <iostream>
#include <fstream>
#include <cstdint>

// VGA resolution
const int VGA_WIDTH = 640;
const int VGA_HEIGHT = 480;

// Pixel buffer (RGB24)
uint8_t framebuffer[VGA_HEIGHT][VGA_WIDTH][3] = {0};

// Simulation time
vluint64_t main_time = 0;
double sc_time_stamp() {
    return main_time;
}

// Write PPM file
bool write_ppm(const char* filename) {
    std::ofstream file(filename, std::ios::binary);
    if (!file) {
        std::cerr << "Error: Could not open " << filename << " for writing" << std::endl;
        return false;
    }
    
    // Write PPM header (P6 = binary RGB)
    file << "P6\n";
    file << VGA_WIDTH << " " << VGA_HEIGHT << "\n";
    file << "255\n";
    
    // Write pixel data
    for (int y = 0; y < VGA_HEIGHT; y++) {
        for (int x = 0; x < VGA_WIDTH; x++) {
            file.write(reinterpret_cast<char*>(&framebuffer[y][x][0]), 3);
        }
    }
    
    file.close();
    std::cout << "Saved output to " << filename << std::endl;
    return true;
}

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create DUT instance
    Vvga_raytracer* dut = new Vvga_raytracer;
    
    // Initialize waveform trace
    Verilated::traceEverOn(true);
    VerilatedFstC* trace = nullptr;
    
    if (argc > 1 && std::string(argv[1]) == "--trace") {
        trace = new VerilatedFstC;
        dut->trace(trace, 99);  // Trace 99 levels of hierarchy
        trace->open("vga_raytracer.fst");
        std::cout << "Tracing enabled: vga_raytracer.fst" << std::endl;
    }
    
    std::cout << "VGA Raytracer Simulation" << std::endl;
    std::cout << "=========================" << std::endl;
    std::cout << "Resolution: " << VGA_WIDTH << "x" << VGA_HEIGHT << std::endl;
    std::cout << "Rendering sphere..." << std::endl;
    
    // Reset sequence
    dut->reset = 1;
    dut->clock = 0;
    
    for (int i = 0; i < 10; i++) {
        dut->clock = 0;
        dut->eval();
        if (trace) trace->dump(main_time);
        main_time += 5;
        
        dut->clock = 1;
        dut->eval();
        if (trace) trace->dump(main_time);
        main_time += 5;
    }
    
    // Release reset
    dut->reset = 0;
    
    // Simulation loop - run until one complete frame is captured
    int frames_captured = 0;
    int last_vsync = 1;
    int pixels_captured = 0;
    
    // Progress indicator
    int progress_step = VGA_HEIGHT / 10;
    int last_progress = 0;
    
    // Run simulation
    // We need to run for a full frame (640*480 pixels + blanking)
    // At 25MHz pixel clock with 50MHz system clock, we need:
    // H_TOTAL * V_TOTAL * 2 clock cycles
    const int MAX_CYCLES = 800 * 525 * 2 * 2;  // Extra margin
    
    for (int cycle = 0; cycle < MAX_CYCLES && frames_captured < 1; cycle++) {
        // Clock low
        dut->clock = 0;
        dut->eval();
        if (trace) trace->dump(main_time);
        main_time += 5;
        
        // Clock high
        dut->clock = 1;
        dut->eval();
        if (trace) trace->dump(main_time);
        main_time += 5;
        
        // Capture pixel data when visible
        if (dut->visible) {
            int x = dut->x_coord;
            int y = dut->y_coord;
            
            if (x >= 0 && x < VGA_WIDTH && y >= 0 && y < VGA_HEIGHT) {
                framebuffer[y][x][0] = dut->red;
                framebuffer[y][x][1] = dut->green;
                framebuffer[y][x][2] = dut->blue;
                pixels_captured++;
                
                // Progress indicator
                if (y > last_progress && (y % progress_step == 0)) {
                    std::cout << "  " << (y * 100 / VGA_HEIGHT) << "% complete..." << std::endl;
                    last_progress = y;
                }
            }
        }
        
        // Detect VSync falling edge (frame complete)
        if (last_vsync == 1 && dut->vsync == 0) {
            frames_captured++;
            std::cout << "Frame captured! (" << pixels_captured << " pixels)" << std::endl;
        }
        last_vsync = dut->vsync;
    }
    
    if (frames_captured == 0) {
        std::cerr << "Warning: No complete frame captured" << std::endl;
        std::cerr << "Pixels captured: " << pixels_captured << std::endl;
    }
    
    // Write output
    if (!write_ppm("raytracer_output.ppm")) {
        std::cerr << "Error writing output file" << std::endl;
    }
    
    // Cleanup
    if (trace) {
        trace->close();
        delete trace;
    }
    
    dut->final();
    delete dut;
    
    std::cout << "\nSimulation complete!" << std::endl;
    std::cout << "View output: raytracer_output.ppm" << std::endl;
    
    return 0;
}
