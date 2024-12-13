//
// Created by HiroiEri on 24-9-23.
//
#include "iostream"
using namespace std;
void InsertSort(int A[], int n){
   int i, j;
   for(i = 2; i <= n; i++){
       if(A[i] < A[i-1]){
           A[0] = A[i];
           for(j = i - 1; A[0] < A[j]; j--){
               A[j+1] = A[j];
           }
           A[j+1] = A[0];
       }
   }
}

int main(){
    int A[] = {0,5,3,4,2,1};
    InsertSort(A, 5);
    for(int i = 1; i <= 5; i++){
        cout << A[i] << ' ';
    }
    return 0;
}