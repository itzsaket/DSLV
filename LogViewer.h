#pragma once
#ifndef LOG_VIEWER_H
#define LOG_VIEWER_H

#include <string>
#include <vector>
#include <thread>
#include <atomic>

class LogViewer {
public:
    LogViewer();
    ~LogViewer();

    // Function to open the file dialog and select log files
    void SelectLogFile();

    // Function to process the selected log file
    void ProcessLogFile(const std::string& filepath);

    // Render the log viewing window
    void RenderLogWindow();

    // Load log details into memory for display
    void LoadLogDetails(const std::string& filepath);

private:
    std::vector<std::string> log_files;  // List of selected log files
    std::vector<std::string> log_details;  // Details of the log files for display

    std::thread log_thread; // Thread for processing the log file
    std::atomic<bool> is_processing; // Indicator for log processing
};

#endif
