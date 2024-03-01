//
// Created by hiroieri on 24-2-29.
//
#define MaxSize 50
#include "iostream"
using namespace std;

typedef struct {
    int data[MaxSize];
    int top;
}SqStack;

void InitStack(SqStack &S){
    S.top = -1;
}

bool Push(SqStack &S, int x){
    if(S.top == MaxSize - 1){
        return false;
    }
    S.top = S.top + 1;
    S.data[S.top] = x;
    return true;
}

bool Pop(SqStack &S, int &x){
    if(S.top == -1){
        return false;
    }
    x = S.data[S.top];
    S.top = S.top - 1;
    return true;
}

bool GetTop(SqStack &S, int x){
    if(S.top == -1){
        return false;
    }
    x = S.data[S.top];
    return true;
}

int main(){
    SqStack S;
    InitStack(S);
    Push(S, 1);
    int i, j;
    Pop(S, i);
    GetTop(S, j);
    cout << i << " " << j;
    return 0;
}