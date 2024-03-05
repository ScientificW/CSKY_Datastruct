//
// Created by hiroieri on 24-2-29.
//
#include "iostream"
using namespace std;

typedef struct SNode{
    int data;
    struct SNode *next;
}*LinkedStack, SNode;

bool InitStack(LinkedStack &S){
    S = (SNode*) malloc(sizeof (SNode));
    if (S == NULL){
        return false;
    }
    S->next = NULL;
    return true;
}

bool Empty(LinkedStack S){
    if(S->next == NULL){
        return true;
    }
    return false;
}

SNode* GetTop(LinkedStack S){
    SNode *s = S->next;
    return s;
};

bool Push(LinkedStack &S, int i){
    SNode *s = (SNode*)malloc(sizeof (SNode));
    s->data = i;
    s->next = S->next;
    S->next = s;
    return true;
}

bool Pop(LinkedStack &S, int &i){
    if (Empty(S)){
        return false;
    }
    SNode *s = S->next;
    i = s->data;
    S->next = s->next;
    free(s);
    return true;
}

int main (){
    LinkedStack S;
    InitStack(S);
    Push(S, 12);
    Push(S, 13);
    int Po;
    Pop(S, Po);
    int i = GetTop(S)->data;
    printf("Pop = %d\n", i);
    printf("Poped = %d\n", Po);
    Pop(S, Po);
    printf("Poped2 = %d\n", Po);
    if(Empty(S)){
        printf("Empty");
    }
    return 0;
}