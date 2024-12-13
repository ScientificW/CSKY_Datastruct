//
// Created by HiroiEri on 24-9-24.
//
#include "iostream"
using namespace std;

int Er(int A[], int n, int find){
    int front = 0, rear = n, mid;
    while(front <= rear){
        mid = (front + rear) / 2;
        if(A[mid] == find){
            return mid;
        }else if(A[mid] < find){
            front = mid + 1;
        }else if(A[mid > find]){
            rear = mid - 1;
        }
    }
    return -1;
}

int main(){
    int A[] = {1,2,3,4,5,6};
    int res = Er(A, 5, 6);
    cout << res;
    return 0;
}