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

SNode* GetTop(LinkedStack S, int i){
    SNode *s = S->next;
    return s;
};

int main (){
    cout << "hello";
    return 0;
}