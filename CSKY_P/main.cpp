#include <cstdlib>
#include "iostream"

#define InitSize 10
typedef struct {
    int *data;
    int MaxSize;
    int length;
}SeqList;

void InitList(SeqList &L){
    L.data = (int*)malloc(InitSize*sizeof (int));
    L.length = 0;
    L.MaxSize = InitSize;
}

void IncreaseSize(SeqList &L, int len){
    int *p = L.data;
    L.data = (int*) malloc((L.MaxSize + len)*sizeof (int));
    for (int i = 0; i < L.length; i++) {
        L.data[i] = p[i];
    }
    L.MaxSize = L.MaxSize + len;
    free(p);
}

bool ListInsert(SeqList &L, int i, int e){
    if(i < 1; i > L.length + 1){
        return false;
    }
    if(L.length >= L.MaxSize){
        return false;
    }
    for(int j = L.length; j >= i; j--){
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}
int main(){
    SeqList L;
    InitList(L);
    ListInsert(L, 1, 12);
    for (int i = 0; i < L.length; i++) {
        printf("data[%d] = %d", i, L.data[i]);
    }
    return 0;
}