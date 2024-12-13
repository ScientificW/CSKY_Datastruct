//
// Created by HiroiEri on 24-9-5.
//
#include "iostream"

using namespace std;

void ShellSort(int A[], int n){
    int d, j, i;
    for(d = n / 2; d >= 1; d = d / 2){
        for(i = d + 1; i <= n; i++){
            if(A[i] < A[i-d]){
                A[0] = A[i];
                for(j = i - d; j > 0 && A[0] < A[j]; j -= d){
                    A[j+d] = A[j];
                }
                A[j+d] = A[0];
            }
        }
    }
}

int main(){
    int A[] = {0, 5, 4, 3, 2, 1};
    ShellSort(A, 5);
    for(int i = 1; i < 6; i++){
        cout << A[i] << ' ';
    }
    return 0;
}