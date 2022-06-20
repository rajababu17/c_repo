#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct queue
{
    int f;
    int b;
    int size;
    int *arr;
};

int isEmpty(struct queue *q)
{
    if (q->b == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct queue *q)
{
    if (q->b == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void queueTraversal(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("\nYou cannot traverse a empty queue");
    }
    else
    {
        for (int i = 0; i < q->b + 1; i++)
        {
            printf("\nThe element at index %d is : %d", i, q->arr[i]);
        }
    }
}

void enqueue(struct queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue is overflow");
    }
    else
    {
        q->b++;
        q->arr[q->b] = data;
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("\nQueue is underflow with exit code -1");
    }
    else
    {

        a = q->arr[q->f];
        for (int i = 0; i < q->b; i++)
        {
            q->arr[i] = q->arr[i + 1];
        }
        q->b--;
        return a;
    }
    return a;
}
int main()
{
    struct queue *q;
    q->size = 5;
    q->b = -1;
    q->f = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 12);
    enqueue(q, 20);
    enqueue(q, 121);
    enqueue(q, 125);
    enqueue(q, 123);
    queueTraversal(q);
    printf("\nDeleted element is %d", dequeue(q));
    printf("\nDeleted element is %d", dequeue(q));
    printf("\nDeleted element is %d", dequeue(q));
    printf("\nDeleted element is %d", dequeue(q));
    printf("\nDeleted element is %d", dequeue(q));
    printf("\nDeleted element is %d", dequeue(q));
    enqueue(q, 200);
    printf("\nDeleted element is %d", dequeue(q));
    queueTraversal(q);
    if (isEmpty(q))
    {
        printf("\nqueue is empty");
    }
    if (isFull(q))
    {
        printf("\nqueue is full");
    }
    getch();
    return 0;

}