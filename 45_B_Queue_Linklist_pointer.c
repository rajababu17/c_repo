#include <stdio.h>
#include <stdlib.h>

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

int isEmpty(struct Node ** front)
{
    if ((*front) == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct Node ** front,struct Node ** rear,int Data)
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
            (*front) = (*rear) = n;
        }
        else
        {
            (*rear) ->next = n;
           (*rear) = n;
        }
    }
}

int dequeue(struct Node ** front)
{
    int return_val = -1;
    if (isEmpty(front))
    {
        return return_val;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n = (*front);
        return_val = n->data;
        (*front) = (*front)->next;
        free(n);
        return return_val;
    }
}

void queueTraversal(struct Node * front)
{
    int i = 0;
    if (isEmpty(&front))
    {
        printf("\nStack is empty i.e no any element in the queue");
    }

    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n = front;
    while (n != NULL)
    {

        printf("\nElement : %d", n->data);
        n = n->next;
        i++;
    }
}
int main()
{
    struct Node *front = NULL;

    struct Node *rear = NULL;

    enqueue(&front,&rear,45);
    enqueue(&front,&rear,49);
    enqueue(&front,&rear,489);
    enqueue(&front,&rear,456);
    enqueue(&front,&rear,490);
    queueTraversal(front);
    printf("\nDeteled element is %d", dequeue(&front));
    printf("\nDeteled element is %d", dequeue(&front));
    printf("\nDeteled element is %d", dequeue(&front));
    printf("\nDeteled element is %d", dequeue(&front));
    // printf("\nDeteled element is %d", dequeue());
    // printf("\nDeteled element is %d", dequeue());
    // queueTraversal();
    enqueue(&front,&rear,98);
    enqueue(&front,&rear,9);
    enqueue(&front,&rear,90);
    enqueue(&front,&rear,79);
    queueTraversal(front);
    printf("\nDeteled element is %d", dequeue(&front));
    queueTraversal(front);
    return 0;
}