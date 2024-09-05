cmake_minimum_required(VERSION 3.10)

project(DSLV_Drone_Simulation_and_Log_Viewer)
set(CMAKE_CXX_STANDARD 17)

# Add the source files for your project
set(SRC_FILES
    main.cpp
    # src/log_parser.cpp
)

# Include directories for GLFW
include_directories(${PROJECT_SOURCE_DIR}/modules/glfw/include)

# Add the ImGui source files
set(IMGUI_FILES
    ${PROJECT_SOURCE_DIR}/modules/imgui/imgui.cpp
    ${PROJECT_SOURCE_DIR}/modules/imgui/imgui_demo.cpp
    ${PROJECT_SOURCE_DIR}/modules/imgui/imgui_draw.cpp
    ${PROJECT_SOURCE_DIR}/modules/imgui/imgui_widgets.cpp
    ${PROJECT_SOURCE_DIR}/modules/imgui/imgui_tables.cpp
    ${PROJECT_SOURCE_DIR}/modules/imgui/backends/imgui_impl_glfw.cpp
    ${PROJECT_SOURCE_DIR}/modules/imgui/backends/imgui_impl_opengl3.cpp
)

# Add the ImPlot source files
set(IMPLOT_FILES
    ${PROJECT_SOURCE_DIR}/modules/implot/implot.cpp
    ${PROJECT_SOURCE_DIR}/modules/implot/implot_items.cpp
)

# Find and link GLFW (assuming you are using vcpkg or another package manager)
add_subdirectory(modules/glfw)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Add executable target (DSLV)
add_executable(DSLV ${SRC_FILES} ${IMGUI_FILES} ${IMPLOT_FILES})

# Include directories for ImGui and ImPlot
target_include_directories(DSLV PRIVATE 
    ${PROJECT_SOURCE_DIR}/modules/imgui
    ${PROJECT_SOURCE_DIR}/modules/implot
    ${PROJECT_SOURCE_DIR}/modules/imgui/backends
)

# Link libraries to the executable
target_link_libraries(DSLV 
    glfw                  # Link GLFW
    OpenGL::GL            # Link OpenGL
    imgui
)
