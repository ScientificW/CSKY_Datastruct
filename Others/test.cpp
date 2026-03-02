//
// Created by HiroiEri on 24-9-5.
//
#include "iostream"
using namespace std;

int B_search(int A[], int L, int R, int x){
    int mid;
    while (L <= R){
        mid = (L+R/2);
        if(A[mid] == x){
            return mid;
        }
        if(x < A[mid]){
            R = mid - 1;
        } else{
            L = mid + 1;
        }
    }
    return -1;
}

int B_search_2(int A[], int L, int R, int x){
    int mid;
    while(L < R){
        mid = (L + R) / 2;
        if(A[mid] >= x) R = mid;
        else L = mid + 1;
    }
    return L;
}

int ans(int A[], int L, int R, int x){
    int pos = B_search_2(A, L, R, x);
    if(A[pos] == x) return pos;
    return -1;
}

void Q_sort(int A[], int L, int R){
    if(L > R){
        return;
    }
    int i = L , j = R;
    int pivot = A[L];
    while(i < j){
        if(i < j && A[j] >= pivot) j--;
        if(i < j && A[i] <= pivot) i++;
        if(i < j)swap(A[i], A[j]);
    }
    Q_sort(A, L, i - 1);
    Q_sort(A, i + 1, R);
}

int main(){
    char c;
    cout << sizeof c;
}