//
// Created by HiroiEri on 24-9-24.
//
#include "iostream"
using namespace std;

void BubbleSort(int A[], int n){
    for(int i = 0; i < n-1; i++){
        bool flag = false;
        for(int j = n-1; j > i; j--){
            if(A[j-1] > A[j]){
                int temp = A[j-1];
                A[j-1] = A[j];
                A[j] = temp;
                flag = true;
            }
        }
        if(!flag){
            return;
        }
    }
}

int main(){
    int A[] = {0,5,3,4,2,1};
    BubbleSort(A, 6);
    for(int i = 1; i <= 5; i++){
        cout << A[i] << ' ';
    }
    return 0;
}