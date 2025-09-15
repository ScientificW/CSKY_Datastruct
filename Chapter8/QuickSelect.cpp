//
// Created by HiroiEri on 25-9-15.
//
#include<iostream>
using namespace std;

void QSelect(int A[], int n){
    int L = 0, R = n-1;
    while (true){
        int pivot = A[L];
        int i = L, j = R;
        while(i < j){
            while (i<j && A[j] >= pivot) j--;
            while (i<j && A[i] <= pivot) i++;
            if(i < j){
                swap(A[i], A[j]);
            }
        }
        swap(A[L], A[i]);
        if(i == n / 2) return;
        if(i < n / 2) L = i + 1;
        else R = i - 1;
    }
}

int main(){
    int A[] = {100, 96, 92, 35, 30, 110, 88, 42};
    QSelect(A, 8);
    for(int i = 0; i <= 7; i++){
        cout << A[i] << ' ';
    }
    return 0;
}