#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    char *arr;
};

void display(struct stack *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        printf("\n%d\n", ptr->arr[i]);
    }
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

void push(struct stack *ptr, int value)
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

void pop(struct stack *ptr)
{

    ptr->top--;
}

int parenthesisMatch(char *exp)
{
    struct stack *sp;
    sp->size = 80;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)

    {
        if (exp[i] == '(')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }

            pop(sp);
        }
        else
        {
            continue;
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main()
{
    char *exp = "4 - 9(((((((8 * 9 *() 5 *() 515)";
    
    int a=parenthesisMatch(exp);
    if (a==1)
    {
        printf("Parenthesis Matches sucessfully");
    }
    else
    {
        printf("parenthesis do not matches");
    }
    return 0;
}