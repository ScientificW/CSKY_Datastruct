#include <cstdio>
#include <cstdlib>

typedef struct node {
    char data;
    struct node* firstchild;
    struct node* nextsibiling;
} *Tree;

void print(Tree root) {
    if (root == NULL) {
        return;
    }

    // 打印当前节点的数据
    printf("%c", root->data);

    // 如果有孩子节点，打印括号并递归打印孩子节点
    if (root->firstchild != NULL) {
        printf("(");
        print(root->firstchild);
        printf(")");
    }

    // 打印兄弟节点
    if (root->nextsibiling != NULL) {
        printf(",");
        print(root->nextsibiling);
    }
}

int main() {
    // 示例树的构建
    Tree root = (Tree)malloc(sizeof(struct node));
    root->data = 'A';

    Tree B = (Tree)malloc(sizeof(struct node));
    B->data = 'B';
    root->firstchild = B;

    Tree D = (Tree)malloc(sizeof(struct node));
    D->data = 'D';
    B->firstchild = D;

    Tree E = (Tree)malloc(sizeof(struct node));
    E->data = 'E';
    D->nextsibiling = E;

    Tree C = (Tree)malloc(sizeof(struct node));
    C->data = 'C';
    B->nextsibiling = C;

    Tree F = (Tree)malloc(sizeof(struct node));
    F->data = 'F';
    C->firstchild = F;

    // 打印树
    print(root);
    printf("\n");

    return 0;
}
