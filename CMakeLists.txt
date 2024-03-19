# 设置最低的CMake版本要求
cmake_minimum_required(VERSION 3.12)

# 设置项目名称
project(ACM)

# 添加源文件
add_executable(ACM helloworld.cpp)

# 添加其他依赖库
target_link_libraries(ACM PUBLIC library1 library2)

# 设置编译选项
target_compile_options(ACM PRIVATE -Wall -Wextra)

# 设置安装规则
install(TARGETS ACM DESTINATION bin)