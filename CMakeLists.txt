# 设置最低的CMake版本要求
cmake_minimum_required(VERSION 3.12)

# 设置项目名称
project(ACM CXX)

aux_source_directory(. SRC_LIST)

add_executable(ACM ${SRC_LIST})
