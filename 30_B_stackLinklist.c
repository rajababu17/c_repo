#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *);

void stackTraversal(struct Node *Top)
{
    if (isEmpty(Top))
    {
        printf("Stack is empty");
        return;
    }

    while (Top != NULL)
    {
        printf("\nThe value at index  is %d ", Top->data);
        Top = Top->next;
    }
}

int isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
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

void push(struct Node **Top, int data)
{
    if (isFull())
    {
        printf("\nstack overflow");
    }
    else
    {
        struct Node *p = (struct Node *)malloc(sizeof(struct Node *));
        p->data = data;
        p->next = *Top;
        (*Top) = p;
    }
}
void pop(struct Node **Top)
{
    if (isEmpty(*Top))
    {
        printf("\nStack Underflow");
        return;
    }
    else
    {
        struct Node *p;
        p = *Top;

        *Top = (*Top)->next;
        printf("\ndeleted element is %d", p->data);
        free(p);
    }
}

int peek(struct Node *top, int position)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = top;
    for (int i = 0; i < position - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int stackTop(struct Node *top)
{
    if (top != NULL)
    {
        return top->data;
    }
    else
        return -1;
}

int stackBottom(struct Node *top)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr = top;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}

int main()
{
    struct Node *Top = NULL;
    push(&Top, 46);
    push(&Top, 455);
    push(&Top, 478);
    push(&Top, 4);
    stackTraversal(Top);
    printf("\nelement at Position %d is %d", 2, peek(Top, 2));
    printf("\nAfter deleting some of the element ");
    pop(&Top);
    pop(&Top);
    stackTraversal(Top);
    printf("\nAfter  of pushing some of the element ");
    push(&Top, 400);
    push(&Top, 500);
    stackTraversal(Top);
    pop(&Top);
    pop(&Top);
    pop(&Top);
    stackTraversal(Top);
    stackTraversal(Top);
    printf("\nTop element of the stack is %d", stackTop(Top));
    printf("\nBottom element of the stack is %d", stackBottom(Top));

    return 0;
}