cmake_minimum_required(VERSION 3.28)
project(C++\ study CXX)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/Test*/*.cpp)

list(REMOVE_ITEM SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Test4/Test4_1_1.cpp")
list(REMOVE_ITEM SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Test4/Test4_1_2.cpp")

foreach (SRC_FILE ${SRC_FILES})
    get_filename_component(FILE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${FILE_NAME} ${SRC_FILE})
endforeach ()

set(TEST4_1_FILES "${CMAKE_CURRENT_SOURCE_DIR}/Test4/Test4_1_1.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/Test4/Test4_1_2.cpp")
add_executable(Test4_1 ${TEST4_1_FILES})
