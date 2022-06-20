#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *str)
{
    if (str->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
int isfull(struct stack *str)
{
    if (str->top == str->size-1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack *str, int data)
{
    if (isfull(str))
    {
        printf("stack overflow\n");
    }
    else{

        str->top++;
    str->arr[str->top] = data;
    }
}
void pop(struct stack *str)
{
    if (isempty(str))
    {
        printf("Stack underflow\n");
    }
    else
        str->top--;
}
void traversal(struct stack *str)
{

    for (int i = str->top; i >= 0; i--)
    {
        printf("%d  ", str->arr[i]);
    }
    printf("\n");
}

int main()

{

    struct stack s;
    s.size = 4;
    s.top = -1;
    // s.arr[s.size];
    s.arr = (int *)malloc(sizeof(int) * s.size);
    // isempty(&s)

    push(&s, 15);
    push(&s, 18);
    push(&s, 25);
    push(&s, 45);
    push(&s, 55);
    push(&s, 60);
    push(&s, 43);
    traversal(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    traversal(&s);

    return 0;
}