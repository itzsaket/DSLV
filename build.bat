@echo off
echo Cleaning build directory...
rmdir /S /Q build

echo Creating build directory...
mkdir build
cd build

echo Configuring the project with CMake...
cmake ..

echo Building the project...
cmake --build .

echo Build process completed!
