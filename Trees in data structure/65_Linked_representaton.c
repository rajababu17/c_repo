#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->left = NULL;
    p->right = NULL;
    p->data = data;
    return p;
}
int main()
{ 
    // Constructing the root node using function (most recomended)
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);
    // Linking the root node with left and right childern
    p->left=p1;
    p->right = p2;


    printf("%d", p->data);
    return 0;
}