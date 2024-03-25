# FILEPATH: /C:/Users/vbcpd/ACM/CMakeLists.txt
# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.12)

# Set the project name
project(ACM CXX)

# Add the subdirectories within the ACM folder
#add_subdirectory(1.basic_algorithm)
#add_subdirectory(2.data_structure)
# Add more subdirectories as needed

aux_source_directory(. SRC_LIST)

# Create the executable
add_executable(ACM ${SRC_LIST})
