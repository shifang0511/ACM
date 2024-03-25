cmake_minimum_required(VERSION 3.12)

project(ACM)

# Add all source files in the current directory
file(GLOB SOURCES "*.cpp" "*.c")

# Create an executable target
add_executable(${PROJECT_NAME} ${SOURCES})