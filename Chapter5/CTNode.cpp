//
// Created by HiroiEri on 24-7-2.
//
#include <iostream>
using namespace std;
#define MAX 30

struct CTNode{
    int child;
    struct CTNode *next;
};

typedef struct {
    int data;
    struct CTNode *firstChild;
}CTBox;

typedef struct {
    CTBox nodes[MAX];
    int n, r;
}CTree;