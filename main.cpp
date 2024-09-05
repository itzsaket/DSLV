#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>
#include "LogViewer.h"
#include <iostream>

LogViewer log_viewer;

void RenderUI() {
    if (ImGui::BeginTabBar("Main Tab Bar")) {

        // Tab for Simulation Control
        if (ImGui::BeginTabItem("Simulation")) {
            ImGui::Text("Simulation related options go here");
            ImGui::EndTabItem();
        }

        // Second tab: Obstacles
        if (ImGui::BeginTabItem("Obstacles")) {
            ImGui::Text("Obstacle related options go here");
            ImGui::EndTabItem();
        }

        // Tab for Viewing Logs
        if (ImGui::BeginTabItem("Logs")) {
            if (ImGui::Button("Select Log File")) {
                log_viewer.SelectLogFile();  // Trigger log file selection
            }

            // Render the log viewing window
            log_viewer.RenderLogWindow();

            ImGui::EndTabItem();
        }

        ImGui::EndTabBar();
    }
}

int main() {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW!" << std::endl;
        return -1;
    }

    // Create a windowed mode window and its OpenGL context
    GLFWwindow* window = glfwCreateWindow(1280, 720, "My Window", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create GLFW window!" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync

    // Initialize OpenGL loader (if using GLAD or GLEW, initialize here)
    // gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

    // Initialize ImGui
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsDark();

    // Initialize ImGui for GLFW and OpenGL
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init("#version 130");

    // Main loop
    while (!glfwWindowShouldClose(window)) {
        // Get window framebuffer size for proper viewport rendering
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);

        // Start ImGui frame
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();

        // Render the user interface
        RenderUI();

        // Render ImGui
        ImGui::Render();
        glViewport(0, 0, display_w, display_h);
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Cleanup ImGui and GLFW
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
