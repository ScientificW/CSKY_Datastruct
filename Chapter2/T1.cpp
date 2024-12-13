//
// Created by HiroiEri on 24-12-13.
//
#include "iostream"
using namespace std;
 typedef struct SqNode{
     int data[10];
     int length = 10;
 }*SqList, SqNode;

bool Del_Min(SqList &L, int &value){
    if(L->length == 0){
        return false;
    }
    value = L->data[0];
    int pos = 0;
    for(int i = 0; i < L->length; i++){
        if(L->data[i] < value){
            value = L->data[i];
            pos = i;
        }
    }
    L->data[pos] = L->data[L->length - 1];
    L->length -= 1;
    return true;
}

int main(){
    int value = 0;
    SqList L = nullptr;
    for(int i = 0; i < 10; i++){
        L->data[i] = i;
    }
    Del_Min(L, value);
    for(int j = 0; j < 9; j++){
        cout << L->data[j];
    }
    return 0;
}