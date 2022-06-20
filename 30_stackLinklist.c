#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void stackTraversal(struct Node *Top)
{
    while (Top != NULL)
    {
        printf("\nThe value of the element is %d", Top->data);
        Top = Top->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
        return 1;
    return 0;
}
int isFull()
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
        return 1;

    free(p);
    return 0;
}

struct Node *push(struct Node *Top, int data)
{
    if (isFull())
    {
        printf("\nstack overflow");
    }
    else
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node *));
        p->data = data;
        p->next = Top;
        Top = p;
        return Top;
    }
}
int pop(struct Node **Top)
{
    if (isEmpty(*Top))
    {
        printf("\nno any items in the stack");
        return -1;
    }
    else
    {
        struct Node *p;
        p = *Top;

        *Top = (*Top)->next;
        int i = p->data;
        free(p);
        return i;
    }

}
int main()
{
    struct Node *Top = NULL;
    Top = push(Top, 46);
    Top = push(Top, 478);
    Top = push(Top, 455);
    Top = push(Top, 4);
    stackTraversal(Top);
    printf("\ndeleted element is %d", pop(&Top));
    printf("\ndeleted element is %d", pop(&Top));
    printf("\ndeleted element is %d", pop(&Top));
    printf("\ndeleted element is %d", pop(&Top));
    printf("\ndeleted element is %d", pop(&Top));
    stackTraversal(Top);

    return 0;
}