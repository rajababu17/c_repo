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
}

void insertion(struct Node *root, int key)
{
    struct Node *prev=NULL;
    while (root != NULL)

    {
        prev = root;
        if (root->data == key)
        {
            printf("Cannot insert %d, already in the tree", key);
            return;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
            root = root->right;
    }
    struct Node *new = createNode(key);

    if (prev->data > key)
    {
        prev->left = new;
    }
    else
        prev->right = new;
}
int main()
{
    // Constructing the root node using function (most recomended)
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(2);
    struct Node *p4 = createNode(4);
    // Linking the root node with left and right childern
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    /*
    finally the tree looks like this
             5
            / \ 
           3   6
          / \
         2   4
    */
    insertion(p, 1);
    // printf("\ninserted value is %d", p->left->left->left->data);
    // printf("\n inserted value is %d", p->right->right->data);

    return 0;
}