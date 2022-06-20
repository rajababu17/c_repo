#include <stdio.h>
#include <stdlib.h>
#include<dos.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node; // its only for the experimental purpose.


struct Node *front = NULL;
struct Node *rear = NULL;


int isFull(struct Node *n)
{

    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(int Data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(n))
    {
        printf("Queue overflow");
    }
    else
    {
        n->data = Data;
        if (isEmpty(front))
        {
            front = rear = n;
            n->next = front;
        }
        else
        {
            rear->next = n; 
            rear = n;
            rear->next = front;
        }
    }
}

int dequeue()
{
    int return_val = -1;
    if (isEmpty())
    {
        return return_val;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n = front;
        return_val = n->data;
        front = front->next;
        rear->next = front;
        free(n);
        return return_val;
    }
}

void queueTraversal()
{
    if (isEmpty())
    {
        printf("\nStack is empty i.e no any element in the queue");
    }

    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n = front;
    do
    {

        printf("\nElement : %d", n->data);
        n = n->next;
    } while (n != front);
}
int main()

{
    int data;
    int option;
    while (option != 0)
    {
        printf("\n1. enqueue\n2. dequeue\n3. display\n0. exit");
        printf("\nEnter Your choice : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter a Number :");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:

            printf("\nDequeued number is :% d", dequeue());
            break;
        case 3:
            queueTraversal();
            break;
        case 0:
            exit(0);
        default:
            printf("\ninvalid choice...choose the option again");
            break;
        }
    }

    return 0;
}