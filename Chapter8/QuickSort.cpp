//
// Created by HiroiEri on 24-8-29.
//
#include<iostream>
using namespace std;

int Partition(int A[], int low, int high){
    int pivot = A[low];
    while (low < high){
        while (low < high && A[high] >= pivot){
            high --;
        }
        A[low] = A[high];
        while (low < high && A[low] <= pivot){
            low ++;
        }
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void QuickSort(int A[], int low, int high){
    if(low < high){
        int pivotPos = Partition(A, low, high);
        QuickSort(A, low, pivotPos - 1);
        QuickSort(A, pivotPos + 1, high);
    }
}

int main(){
    int A[] = {100, 96, 92, 35, 30, 110, 88, 42};
    QuickSort(A, 0, 7);
    for(int i = 0; i <= 7; i++){
        cout << A[i] << ' ';
    }
    return 0;
}