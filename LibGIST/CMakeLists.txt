cmake_minimum_required(VERSION 2.8.11)
project(LibGIST)
set(CMAKE_BUILD_TYPE Release)

if(MSVC)
  set(CMAKE_CXX_FLAGS "/EHsc")
else()
  set(CMAKE_CXX_FLAGS "-std=c++11 -fno-operator-names")
endif()

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(FFTW3_DIR /home/arya/fftw-3.3.7)
find_package(FFTW3 REQUIRED)
include_directories(${FFTW3_INCLUDES})

set(PROJ_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJ_INCLUDE_DIR})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

add_subdirectory(src)