cmake_minimum_required(VERSION 3.28)
project(C\ study C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Test*/*.c)
foreach (SRC_FILE ${SRC_FILES})
    get_filename_component(FILE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${FILE_NAME} ${SRC_FILE})
endforeach ()