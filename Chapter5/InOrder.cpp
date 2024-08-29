//
// Created by HiroiEri on 2024/6/30.
//
#include "iostream"
using namespace std;

typedef struct BiTNode{
    int data;
    struct BiTNode *lchild ,*rchild;
}BiTNode, *BiTree;

void initTree(BiTree &tree){
    tree = (BiTNode*)malloc(sizeof (BiTNode));
}

void setTree(){
    BiTree tree;
    initTree(tree);
    tree->data =  1;
    tree->lchild->data = 2;
    tree->rchild->data = 3;
}