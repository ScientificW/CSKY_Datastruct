//
// Created by hiroieri on 24-3-14.
//
#define MaxSize 10
#include<iostream>
using namespace std;

typedef struct Stack{
    char br[MaxSize];
    int top;
}Stack;

bool bracketCheck(char s[], int len){
    Stack brackets;
    brackets.top = -1;
    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            brackets.br[brackets.top] = s[i];
            brackets.top++;
        }else{
            if(brackets.top == 0){
                return false;
            }
            if(s[i] == ')' && brackets.br[brackets.top] != '(' ){
                return false;
            }
            if(s[i] == ']' && brackets.br[brackets.top] != '[' ){
                return false;
            }
            if(s[i] == '}' && brackets.br[brackets.top] != '{' ){
                return false;
            }
            brackets.top--;
        }
    }
    return true;
}

int main(){
    char br[10] = {'(', '(', ')', ')'};
    bool res = bracketCheck(br, 4);
    if(res){
        cout << "Good";
    }
    return 0;
}