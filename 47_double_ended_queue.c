
// -------------------DOUBLE ENDED QUEUE-----------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
struct Node *front = NULL;

struct Node *rear = NULL;

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node; // its only for the experimental purpose.

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

void rearEnqueue(int Data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(n))
    {
        printf("Queue overflow");
    }
    else
    {
        n->data = Data;
        n->next = NULL;
        if (isEmpty(front))
        {
            front = rear = n;
        }
        else
        {
            rear->next = n;
            rear = n;
        }
    }
}
void frontEnqueue(int Data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (isFull(n))
    {
        printf("Queue overflow");
    }
    else
    {
        n->data = Data;
        n->next = NULL;
        if (isEmpty(front))
        {
            front = rear = n;
        }
        else
        {
            n->next = front;
            front = n;
        }
    }
}

int frontDequeue()
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
        free(n);
        return return_val;
    }
}

int rearDequeue()
{
    int return_val = -1;
    if (isEmpty())
    {
        return return_val;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));

        n = front;
        if (n == rear)
        {
            return_val = n->data;
            // temp = n;
            front = rear = NULL;
            free(temp);
            free(n);
            return return_val;
        }

        while (n->next != rear)
        {
            n = n->next;
        }
        return_val = rear->data;
        temp = rear;
        n->next = NULL;
        rear = n;
        free(temp);
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
    while (n != NULL)
    {

        printf("\nElement : %d", n->data);
        n = n->next;
    }
}
int main()

{
    printf("\n------------------DOUBLE ENDED QUEUE-----------------------\n\n");
    int data;
    int option;
    while (option != 0)
    {
        printf("\n\n1. frontEnqueue\n2. rearEnqueue \n3. forntDequeue \n4. rearDequeue\n5. Display\n0. Exit");
        printf("\nEnter Your choice : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nEnter a Number :");
            scanf("%d", &data);
            frontEnqueue(data);
            break;
        case 2:
            printf("\nEnter a Number :");
            scanf("%d", &data);
            rearEnqueue(data);
            break;

        case 3:
            printf("\n%d is deleted from the front end of the Queue", frontDequeue());
            break;

        case 4:
            printf("\n%d is deleted from the rear end of the Queue", rearDequeue());
            break;
        case 5:
            queueTraversal();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\ninvalid choice...choose the option again");
            break;
        }
    }

    return 0;
}