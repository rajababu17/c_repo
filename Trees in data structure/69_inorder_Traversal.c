#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data)
{
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->left = NULL;
    p->right = NULL;
    p->data = data;
}
void inorderTraversal(struct Node * root){
    if (root!=NULL)
    {
        inorderTraversal(root->left);
        printf("\t%d", root->data);
        inorderTraversal(root->right);
    }
}
int main()
{ 
    // Constructing the root node using function (most recomended)
    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);
    // Linking the root node with left and right childern
    p->left=p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    /*
    finally the tree looks like this
             4
            / \ 
           1   6
          / \
         5   2
    */


    // printf("%d", p->data);
    inorderTraversal(p);
    return 0;
}           