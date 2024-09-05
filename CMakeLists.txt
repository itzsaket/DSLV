cmake_minimum_required(VERSION 3.10)

project(DSLV_Drone_Simulation_and_Log_Viewer)
set(CMAKE_CXX_STANDARD 17)

# Add the source files for the project
set(SRC_FILES
    main.cpp
    # src/log_parser.cpp
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

# Include directories for ImGui and ImPlot
include_directories(${PROJECT_SOURCE_DIR}/modules/imgui)
include_directories(${PROJECT_SOURCE_DIR}/modules/implot)
include_directories(${PROJECT_SOURCE_DIR}/modules/imgui/backends)

# Add executable target
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
