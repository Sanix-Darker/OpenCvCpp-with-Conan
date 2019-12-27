cmake_minimum_required(VERSION 2.8.12)
project(OpencvCam)

add_definitions("-std=c++11")

include("./build/conanbuildinfo.cmake")
conan_basic_setup()

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})