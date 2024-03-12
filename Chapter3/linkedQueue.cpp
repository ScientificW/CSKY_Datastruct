//
// Created by hiroieri on 24-3-12.
//
#include "iostream"
using namespace std;

typedef struct LinkNode{
    int data;
    struct LinkNode *next;
}LinkNode;

typedef struct LinkQueue{
    LinkNode *front, *rear;
}LinkQueue;

bool InitQueue(LinkQueue &Q){
    Q.front = Q.rear = (LinkNode*) malloc(sizeof (LinkNode));
    Q.front->next = NULL;
}

bool isEmpty(LinkQueue Q){
    if(Q.front == Q.rear){
        return true;
    }
    return false;
}

void EnQueue(LinkQueue &Q, int x){
    LinkNode *s = (LinkNode*) malloc(sizeof (LinkNode));
    s->data = x;
    s->next = NULL;
    Q.rear->next = s;
    Q.rear = s;
}

bool DeQueue(LinkQueue &Q, int x){
    if(isEmpty(Q)){
        return false;
    }
    LinkNode *p = Q.front->next;
    x = p->data;
    Q.front->next = p->next;
    if(Q.rear == p){
        Q.rear = Q.front;
    }
    free(p);
    return true;
}

bool LoQueue(LinkQueue Q, int &x){
    if (Q.front == Q.rear){
        return false;
    }
    x = Q.front->data;
    return true;
}

int main(){
    LinkQueue Q;
//    InitQueue(Q);
//    EnQueue(Q, 1);
//    EnQueue(Q, 2);
//    int x;
//    LoQueue(Q, x);
//    cout << x << '\n';
//    DeQueue(Q, x);
//    cout << x << '\n';
//    return 0;
}