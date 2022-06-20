#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int front;
    int rear;
    int size;
    int *arr;
};
int isEmpty(struct circularQueue *q)
{
    if (q->rear == q->front)
    {
        return 1;
    }
    return 0;
}
int isFull(struct circularQueue *q)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        return 1;
    }
    return 0;
}

void circularQueueTraversal(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("\nYou cannot traverse a empty queue");
    }
    else
    {
        int i = (q->front + 1) % q->size;
        int j = (q->rear + 1) % q->size;
        while (i!=j)
        {
            printf("\nThe element at index %d is : %d", i, q->arr[i]);
            i = (i + 1) % q->size;
        }
    }
}

void enqueue(struct circularQueue *q, int data)
{
    if (isFull(q))
    {
        printf("\nQueue is overflow");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = data;
        printf("\nEnqued element is :%d", q->arr[q->rear]);
    }
}

int dequeue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("\nQueue is underflow with exit code -1");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        a = q->arr[q->front];
        return a;
    }
    return a;
}

int main()
{
    struct circularQueue *q=(struct circularQueue *)malloc(sizeof(struct circularQueue ));
    q->size =4;
    q->rear = q->front = 0;

    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 12);
    enqueue(q, 20);
    enqueue(q, 121);
    enqueue(q, 125);
    enqueue(q, 123);
    circularQueueTraversal(q);
    printf("\nDeleted element is %d", dequeue(q));
    printf("\nDeleted element is %d", dequeue(q));
    enqueue(q, 200);
    enqueue(q, 500);
    printf("\nDeleted element is %d", dequeue(q));
    enqueue(q, 598);
    enqueue(q, 598);

    circularQueueTraversal(q);
    if (isEmpty(q))
    {
        printf("\ncircularQueue is empty");
    }
    if (isFull(q))
    {
        printf("\ncircularQueue is full");
    }
    circularQueueTraversal(q);
    printf("\nDeleted element is %d", dequeue(q));
    enqueue(q, 59);
    enqueue(q, 58);
    circularQueueTraversal(q);
    circularQueueTraversal(q);

    return 0;
}