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
void postorderTraversal(struct Node * root){
    if (root!=NULL)
    {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("\t%d", root->data);
    }
}

struct Node * search(struct Node *root,int key)
{
    if (root==NULL)
    {
        return NULL;

    }
    if (root->data==key)

    {
        return root;
    }
    else if (root->data>key)
    {
        return search(root->left,key);
    }
    else
        return search(root->right, key);
}


struct Node * searchIter(struct Node *root,int key)
{
    while (root!=NULL)
    {
        if (root->data==key)
        {
            return root;

        }
        else if (root->data>key)
        {
            root = root->left;
        }
        else
            root = root->right;
    }
    return NULL;
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
    p->left=p1;
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


    // printf("%d", p->data);
    // postorderTraversal(p);
    struct Node *Data = searchIter(p, 4);
if (Data!=NULL)
{
    printf("\nFound :%d", Data->data);
    
}
else{
    printf("\nElement Not found");
}


    return 0;
}           