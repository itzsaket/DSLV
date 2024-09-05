#include "LogViewer.h"
#include <iostream>
#include <fstream>
#include <sstream>
extern "C" {
#include "tinyfiledialogs.h"
}
#include "imgui.h"

// Constructor
LogViewer::LogViewer() : is_processing(false) {}

// Destructor
LogViewer::~LogViewer() {
    if (log_thread.joinable()) {
        log_thread.join();
    }
}

// Function to open file dialog and select log files
void LogViewer::SelectLogFile() {
    const char* filetypes[] = { "*.log", "*.bin" };
    const char* selected_file = tinyfd_openFileDialog("Select Log File", "", 2, filetypes, "Log/Bin Files", 0);

    if (selected_file) {
        std::cout << "Selected file: " << selected_file << std::endl;
        log_files.push_back(std::string(selected_file));
        LoadLogDetails(std::string(selected_file));
    } else {
        std::cout << "No file selected." << std::endl;
    }
}

// Function to load log details into memory
void LogViewer::LoadLogDetails(const std::string& filepath) {
    std::ifstream file(filepath);
    if (file.is_open()) {
        std::stringstream buffer;
        buffer << file.rdbuf(); // Read the entire log file
        log_details.push_back(buffer.str()); // Store log details
        file.close();
    } else {
        std::cout << "Error opening file: " << filepath << std::endl;
    }
}

// Function to process a selected log file
void LogViewer::ProcessLogFile(const std::string& filepath) {
    is_processing = true;
    log_thread = std::thread([this, filepath]() {
        LoadLogDetails(filepath);  // Simulate file loading
        is_processing = false;
    });
}

// Render the log window with ImGui
void LogViewer::RenderLogWindow() {
    if (!log_files.empty()) {
        for (size_t i = 0; i < log_files.size(); ++i) {
            ImGui::Begin(("Log Viewer - " + log_files[i]).c_str());

            if (is_processing) {
                ImGui::Text("Loading log file: %s", log_files[i].c_str());
            } else {
                if (i < log_details.size()) {
                    ImGui::Text("Log Details:");
                    ImGui::TextWrapped("%s", log_details[i].c_str());
                } else {
                    ImGui::Text("No log data available.");
                }
            }

            ImGui::End();
        }
    } else {
        ImGui::Text("No log file selected.");
    }
}
