cmake_minimum_required(VERSION 3.27)
project(CSKY_Datastruct)

set(CMAKE_CXX_STANDARD 14)


add_executable(listStack 栈/listStack.cpp)
add_executable(LinkList 顺序表/LinkList.cpp)
add_executable(linkedStack 栈/linkedStack.cpp)