cmake_minimum_required(VERSION 2.8)
project(dino_ai)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Display_img src/display_img.cpp)
target_link_libraries(Display_img ${OpenCV_LIBS})

