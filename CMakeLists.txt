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
add_executable(KuoHaoPiPei Chapter3/KuoHaoPiPei.cpp)
add_executable(SanYuanBiaoDaShi Others/SanYuanBiaoDaShi.cpp)
add_executable(KMP_1 Chapter4/KMP_1.cpp)
add_executable(InOrder Chapter5/InOrder.cpp)
add_executable(CTNode Chapter5/CTNode.cpp)
add_executable(QuickSort Chapter8/QuickSort.cpp)
add_executable(HeadSort Chapter8/HeapSort.cpp)
add_executable(HeapSortRe Chapter8/HeapSortRe.cpp)
add_executable(MergeSort Chapter8/MergeSort.cpp)
add_executable(ShellSort Chapter8/ShellSort.cpp)
add_executable(test Others/test.cpp)
add_executable(InsertSort Chapter8/InsertSort.cpp)
add_executable(ErFen Chapter7/ErFen.cpp)
add_executable(InsertSortHalf Chapter8/InsertSortHalf.cpp)
add_executable(BubbleSort Chapter8/BubbleSort.cpp)
add_executable(T1 Chapter2/T1.cpp)
add_executable(2022_2 RealTest/2022_2.cpp)
add_executable(2024_2 RealTest/2024_2.cpp)