//
// Created by HiroiEri on 24-9-5.
//
#include "iostream"

using namespace std;

void Merge(int A[], int B[], int low, int mid, int high){
    int i, j, k;
    for(k = low; k <= high; k++){
        B[k] = A[k];
    }
    for(i = low, j = mid + 1, k = i;  i <= mid && j <= high; k++){
        if(B[i] <= B[j]){
            A[k] = B[i++];
        } else{
            A[k] = B[j++];
        }
    }
    while(i <= mid){
        A[k++] = B[i++];
    }
    while(j <= high){
        A[k++] = B[j++];
    }
}

void MergeSort(int A[], int B[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        MergeSort(A, B, low, mid);
        MergeSort(A, B, mid + 1, high);
        Merge(A, B, low, mid, high);
    }
}

int main(){
    int A[] = {5, 4, 3, 2, 1};
    int B[4-0+1];
    MergeSort(A, B, 0, 4);
    for(int i : A){
        cout << i << ' ';
    }
    return 0;
}