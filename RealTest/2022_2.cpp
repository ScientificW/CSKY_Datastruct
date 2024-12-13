//
// Created by HiroiEri on 24-12-13.
//
#include "iostream"
using namespace std;

typedef struct Node{
    int val;
    Node* next;
}*LinkedList, Node;

bool init_node(LinkedList &L){
    L = (Node*) malloc(sizeof (Node));
    if (L == nullptr)
        return false;
    L->next = nullptr;
    return true;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

Node* Part(Node *start, Node *end){
    Node *p = start;
    Node *q = p->next;
    int pivot = start->val;
    while(q != end){
        if(q->val < pivot){
            p = p->next;
            swap(p->val, q->val);
        }
        q = q->next;
    }
    swap(p->val, start->val);
    return p;
}

void quickSort(Node *start, Node *end){
    if(start->next != end && start != end){
        Node *pivotPos = Part(start, end);
        quickSort(start, pivotPos);
        quickSort(pivotPos->next, end);
    }
}

Node* qsort(Node *first){
    quickSort(first, nullptr);
    return first;
}

int main(){
    LinkedList L;
    init_node(L);

}
