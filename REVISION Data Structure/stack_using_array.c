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
    if ( str->top== -1)

        return 1;

    else
        return 0;
}

int isFull(struct stack *str)
{
    if (str->size-1 == str->top)

        return 1;

    else
        return 0;
}

void pop(struct stack *str)
{
    if (isempty(str))
    {
        printf("Stack underflow\n");
    }
    else
    {

        str->top--;
    }
}

void push(struct stack *str, int data)
{
    if (isFull(str))
    {
        printf("Stack overflow\n");
    }
    else
    {
        str->top++;
        str->arr[str->top] = data;
    }
}


void traversal(struct stack * str){
    for (int i = str->top; i>=0; i--)
    {
        printf("%d  ",str->arr[i]);
    }
    
}

int peek(struct stack *str,int index){
    int validIndex=str->top-index+1;
    if (validIndex<0)
    {
        printf("invaid input");
        return -1;

    }
    else
    {
        return str->arr[validIndex];
    }
    
}

int main()
{
    struct stack s;
    s.size = 50;
    s.top = -1;
    s.arr = (int *)malloc(sizeof(int) * s.size);
    push(&s,14);
    push(&s,18);
    push(&s,25);
    push(&s,36);
    push(&s,46);
    traversal(&s);
    printf("\n\n%d\n",peek(&s,1));
    printf("\n\n%d\n",peek(&s,2));
    printf("\n\n%d\n",peek(&s,3));
    printf("\n\n%d\n",peek(&s,4));
    printf("\n\n%d\n",peek(&s,5));
    pop(&s);
    pop(&s);
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