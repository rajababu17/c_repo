#include <iostream>
using namespace std;

class Node
{
public:
    int *arr;
    int size;
    int top;

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



};



int main()
{   


     Node s; 
    s.size = 15;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));
    printf("%d", s.isFull(&s));
    printf("%d", s.isEmpty(&s));
    s.push(&s, 4);
    s.push(&s, 4);
    s.push(&s, 4);
    s.push(&s, 4);
    s.display(&s);
    s.pop(&s);
    s.display(&s);
    // s.display(&s);
    // s.display(&s);

    return 0;
}