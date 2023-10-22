cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(cmake_and_cuda LANGUAGES CXX CUDA)

include_directories(include)
include_directories(source)


set(EXAMPLENAME cuda_demo)
set(SDKNAME cuda_demo_sdk)

add_subdirectory(source)
add_subdirectory(demo)
