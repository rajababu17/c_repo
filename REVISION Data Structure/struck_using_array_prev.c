#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int *arr;
    int size;
    int top;
};

void display(struct Node *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("\n%d\n", ptr->arr[i]);
    }
}

int isEmpty(struct Node *ptr)
{
    if (ptr->top == -1)

        return 1;

    return 0;
}

int isFull(struct Node *ptr)
{

    if (ptr->top == ptr->size - 1)

        return 1;

    return 0;
}

void push(struct Node *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

void pop(struct Node *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\n%d is deleted from the stack ", ptr->arr[ptr->top]);
        ptr->top--;
    }
}

int main()
{

    struct Node *s;
    s->size = 15;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("%d", isFull(s));
    printf("%d", isEmpty(s));
    push(s, 4);
    push(s, 6);
    push(s, 7);
    push(s, 9);
    push(s, 15);
    push(s, 18);
    push(s, 25);
    push(s, 251);
    push(s, 255);
    display(s);
    printf("%d", isFull(s));
    printf("%d", isEmpty(s));
    display(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    display(s);

    return 0;
}