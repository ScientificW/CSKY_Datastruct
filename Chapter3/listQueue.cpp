//
// Created by hiroieri on 24-3-12.
//
#define MaxSize 10
#include "iostream"

using namespace std;

typedef struct SqQueue{
    int data[MaxSize];
    int front, rear;
}SqQueue;

bool InitQueue(SqQueue &Q){
    Q.front = Q.rear = 0;
    return true;
}

bool isEmpty(SqQueue &Q){
    if(Q.rear == Q.front){
        return true;
    }
    return false;
}

bool isFull(SqQueue &Q){
    if((Q.rear + 1) % MaxSize == Q.front){
        return true;
    }
    return false;
}

bool EnQueue(SqQueue &Q, int x){
    if (isFull(Q)){
        return false;
    }
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

bool DeQueue(SqQueue &Q, int &x){
    if(isEmpty(Q)){
        return false;
    }
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}

bool LoQueue(SqQueue &Q, int &x){
    if (isEmpty(Q)){
        return false;
    }
    x = Q.data[Q.front];
    return true;
}

int main(){
    SqQueue Q;
    InitQueue(Q);
    if (isEmpty(Q)){
        printf("Empty\n");
    }
    EnQueue(Q, 1);
    EnQueue(Q, 2);
    if (isEmpty(Q)){
        printf("Empty\n");
    } else{
        cout << "Not Empty\n";
    }
    int x, y;
    LoQueue(Q, x);
    cout << x << "\n";
    DeQueue(Q, y);
    cout << y << "\n";
    LoQueue(Q, x);
    cout << x << "\n";
    DeQueue(Q, y);
    cout << y << "\n";
    if (isEmpty(Q)){
        printf("Empty\n");
    } else{
        cout << "Not Empty\n";
    }
    return 0;
}