# openCVlearning

# Build

To compile our code using this CMakeLists.txt file, we have to carry out the following steps:

1. Create a  folder.

    build

2. Inside the  folder, execute CMake or open CMake GUI app in Windows, choose the  and  folders, and press the Configure and Generate buttons.

    build

    source

    build

3. If you are on Linux or macOS, generate a Makefile as usual, and then compile the project using the  command. If you are on Windows, open the project using the editor selected in step 2 and then compile.

    make

    - CMake /Users/boyangzhang/Documents/CodeInterview/C++/OpenCVChapter2/OpenCVChapter2
    - make
    - ./program

# Complier

gcc main.cpp -o main

./main
