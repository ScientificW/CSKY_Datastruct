//
// Created by hiroieri on 24-4-14.
//
#include<iostream>

using namespace std;

typedef struct{
    char ch[10];
    int len;
}SString, *String;

void get_next(SString T, int next[]){
    int i = 1, j = 0;
    next[1] = 0;
    while(i < T.len){
        if(j == 0 || T.ch[i] == T.ch[j]){
            ++i, ++j;
            next[i] = j;
        } else{
            j = next[j];
        }
    }
}

int main(){
    SString* S = (SString*) malloc(sizeof (SString));
    S->ch = {'a', 'b', 'a', 'a', 'b', 'c', 'a', 'b', 'a'};
    int next[10];
    get_next(*S, next);
    return 0;
}