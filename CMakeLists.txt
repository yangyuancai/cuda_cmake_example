cmake_minimum_required(VERSION 3.20)#cmake版本需求

project(cuda_add C CXX CUDA)#cuda使能
if(CMAKE_CUDA_COMPILER)
  message("CUDA is available.")
  message("CUDA Compiler: ${CMAKE_CUDA_COMPILER}")
  message("CUDA Compiler ID: ${CMAKE_CUDA_COMPILER_ID}")
  message("CUDA Compiler Version: ${CMAKE_CUDA_COMPILER_VERSION}")
else()
  message("CUDA is not available.")
endif()

#工程名字
set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)
find_package(OpenMP REQUIRED)

if (OpenCV_FOUND)
    include_directories(${OpenCV_INCLUDE_DIRS})
	include_directories(${CMAKE_SOURCE_DIR}/source)
endif (OpenCV_FOUND)

message(${OpenCV_LIBS})
include_directories(include)
set(EXAMPLENAME cuda_demo)
add_subdirectory(example)


