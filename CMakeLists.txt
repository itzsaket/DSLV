cmake_minimum_required(VERSION 3.10)

project(DSLV_Drone_Simulation_and_Log_Viewer)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)

# Add the source files for the project
set(SRC_FILES
    main.cpp
    LogViewer.cpp
    simulation.cpp
    ${PROJECT_SOURCE_DIR}/libraries/File_Dialogs/tinyfiledialogs.cpp
)

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

# Add GLFW submodule
add_subdirectory(${PROJECT_SOURCE_DIR}/modules/glfw)

# Add executable target, including tinyfiledialogs.cpp directly
add_executable(DSLV ${SRC_FILES} ${IMGUI_FILES} ${IMPLOT_FILES})

# Link GLFW, OpenGL, and necessary libraries for Windows
target_link_libraries(DSLV
    glfw                 # Link GLFW submodule as a library
    opengl32             # Link OpenGL directly (Windows OpenGL library)
    kernel32
    user32
    gdi32
    winspool
    shell32
    ole32
    oleaut32
    uuid
    comdlg32
    advapi32
)

# Target-specific include directories
target_include_directories(DSLV PRIVATE
    ${PROJECT_SOURCE_DIR}/modules/imgui
    ${PROJECT_SOURCE_DIR}/modules/implot
    ${PROJECT_SOURCE_DIR}/modules/imgui/backends
    ${PROJECT_SOURCE_DIR}/libraries/File_Dialogs
)

# Add compile definitions for C/C++ compatibility
add_compile_definitions(__STDC_LIMIT_MACROS)
add_compile_definitions(__STDC_CONSTANT_MACROS)

# Optional: Add compile options for warnings (you can adjust as needed)
add_compile_options(-Wall -Wextra -Wpedantic)
