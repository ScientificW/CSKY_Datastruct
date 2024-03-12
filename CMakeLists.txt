cmake_minimum_required(VERSION 3.27)
project(CSKY_Datastruct)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)



add_executable(main Chapter2/main.cpp)
add_executable(listStack Chapter3/listStack.cpp)
add_executable(LinkList Chapter2/LinkList.cpp)
add_executable(linkedStack Chapter3/linkedStack.cpp)
add_executable(listQueue Chapter3/listQueue.cpp)
add_executable(linkedQueue Chapter3/linkedQueue.cpp)