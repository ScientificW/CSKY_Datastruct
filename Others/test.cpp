//
// Created by HiroiEri on 24-9-5.
//
#include "iostream"
using namespace std;

int main(){
    int m = 0, i, j, n;
    cin >> n;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 2*i; j++){
            m ++;
        }
    }
    cout << m;
    return 0;
}