//
// Created by Richard on 2024/2/4.
//
#include "cstdlib"
#include "iostream"

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode, *LinkList;

bool InitList(LinkList &L){
    L = (LNode*) malloc(sizeof (LNode));
    if (L == nullptr)
        return false;
    L->next = nullptr;
    return true;
}

LNode* GetElem(LinkList L, int i){
    int j = 1;
    LNode *p = L->next;
    if(i == 0){
        return L;
    }
    if(i < 1){
        return nullptr;
    }
    while(p != nullptr && j < i){
        p = p->next;
        j++;
    }
    return p;
}

bool Empty(LinkList L){
    if(L->next == NULL){
        return true;
    }else{
        return false;
    }
}

bool ListInsert(LinkList &L, int i, int e){
    if (i < 1) {
        return false;
    }
    LNode *p = L;
    int j = 0;
    p = GetElem(L, i-1);
    LNode *s = (LNode*) malloc(sizeof (LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool ListDelete(LinkList &L, int i, int &e){
    LNode *p  = GetElem(L, i - 1);
    if (p == NULL && p->next == NULL){
        return false;
    }
    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

LinkList ListTailInsert(LinkList &L){
    int x;
    LNode *s, *r = L;
    scanf("%d", &x);
    while (x != 9999){
        s = (LNode *)malloc(sizeof (LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

int Length(LinkList &L){
    int Length = -1;
    LNode *p = L;
    while(p != NULL){
        p = p->next;
        Length ++;
    }
    return Length;
}

bool PrintLinkList(LinkList &L){
    if (Empty(L)){
        return false;
    }
    LNode *p = L->next;
    while (p != NULL){
        printf("%d\n", p->data);
        p = p->next;
    }
    return true;
}

int main(){
    LinkList L;
    InitList(L);
//    ListInsert(L, 1, 12);
//    LNode *p = GetElem(L, 1);
//    printf("%d\n", p->data);
//    if(Empty(L)){
//        printf("Empty\n");
//    }else{
//        printf("Not Empty\n");
//    }
//    int deletedElm;
//    ListDelete(L, 1, deletedElm);
//    printf("%d\n", deletedElm);
    ListTailInsert(L);
    int len = Length(L);
    printf("%d\n", len);
    PrintLinkList(L);
    if(Empty(L)){
        printf("Empty\n");
    }else{
        printf("Not Empty\n");
    }
    return 0;
}