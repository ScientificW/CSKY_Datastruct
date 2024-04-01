//
// Created by Richard on 2024/4/1.
//
#include <iostream>
using namespace std;

int main(){
    int x = 12;
    int i = ((x > 0)? 1: 2 ); //若符合括号内条件，则:前的被调用
    cout << i;
    return 0;
}