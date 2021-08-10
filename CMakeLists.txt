cmake_minimum_required(VERSION 3.10)
project(ansicolor C)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib/)

add_library(ansicolor SHARED
    "src/colors.c"
)



file(GLOB HEADERS "src/*.h")
file(COPY ${HEADERS} DESTINATION "./lib/")