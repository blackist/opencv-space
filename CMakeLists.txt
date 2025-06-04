cmake_minimum_required(VERSION 3.10)
project(OpenCVTest)
set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(OpenCVTest src/camshitdemo.cpp)
target_link_libraries(OpenCVTest ${OpenCV_LIBS})

# 在 Debug 构建类型中启用调试信息 (非常重要！)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
