#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    char *arr;
    int top;
    int size;
};

void display(struct stack *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("\n%d\n", ptr->arr[i]);
    }
}

char stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)

        return 1;

    return 0;
}

int isFull(struct stack *ptr)
{

    if (ptr->top == ptr->size - 1)

        return 1;

    return 0;
}

void push(struct stack *ptr, char value)
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

char pop(struct stack *ptr)
{
    char popedData = ptr->arr[ptr->top];
    ptr->top--;
    return popedData;
}

int preference(char ch)
{
    if (ch == '*' || ch == '/')

        return 3;

    else if (ch == '+' || ch == '-')

        return 2;

    else

        return 0;
}

int isoperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-' )
        return 1;
    else
        return 0;
}
char *infixToPostfix(char *infix)
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size = 80;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc(strlen(infix)+1 * sizeof(char));
    int i = 0;
    int j = 0;
    while (!infix[i] == '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (preference(infix[i]) > preference(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    // postfix[j] = '\n';
    return postfix;
}

int main()
{
    char *infix_exp = "a + b * d / b";
    char *postfix = infixToPostfix(infix_exp);
    printf("\n=====================INFIX TO POSTFIX=======================\n");
    printf("postfix of the expression is %s", postfix);
    return 0;
}