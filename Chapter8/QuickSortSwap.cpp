//
// Created by HiroiEri on 25-9-14.
//
#include<iostream>
using namespace std;

void QSort(int A[], int L, int R){
    if(L >= R) return;
    int pivot = A[L];
    int i = L, j = R, temp;
    while(i < j){
        while (i<j && A[j] >= pivot) j--;
        while (i<j && A[i] <= pivot) i++;
        if(i < j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[L];
    A[L] = A[i];
    A[i] = temp;

    QSort(A, L, i-1);
    QSort(A, i+1,R);
}

int main(){
    int A[] = {100, 96, 92, 35, 30, 110, 88, 42};
    QSort(A, 0, 7);
    for(int i = 0; i <= 7; i++){
        cout << A[i] << ' ';
    }
    return 0;
}