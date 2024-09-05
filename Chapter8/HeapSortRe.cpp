 //
// Created by HiroiEri on 24-8-31.
//
#include "iostream"
using namespace std;

void HeapAdjust(int A[], int k, int len){
    A[0] = A[k];
    for(int i = 2*k; i <= len; i*=2){
        if(i < len && A[i] > A[i+1]){
            i++;
        }
        if(A[0] <= A[i]){
            break;
        }else{
            A[k] = A[i];
            k = i;
        }
    }
    A[k] = A[0];
}

void BuildMinHeap(int A[], int len){
    for(int i = len/2; i > 0; i--){
        HeapAdjust(A, i, len);
    }
}


 void swap(int A[], int a, int b){
     int temp = A[a];
     A[a] = A[b];
     A[b] = temp;
 }

 void HeapSort(int A[], int len){
     BuildMinHeap(A, len);
     for(int i = len; i > 1; i--){
         swap(A, i, 1);
         HeapAdjust(A, 1, i-1);
     }
 }

 int main(){
     int A[] = {0,53,17,78,9,45,65,87,32};
     HeapSort(A, 8);
     for(int i = 1; i <= 8; i++){
         cout << A[i] << ' ';
     }
     return 0;
 }