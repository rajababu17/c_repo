#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
};

void linkListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf(" The value of the element is %d\n", ptr->data);
        ptr = ptr->Next;
    }
}



// INSERTION FROM THE BEGINING OF THE LINKLIST
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *NewHead = (struct Node *)malloc(sizeof(struct Node));
    NewHead->data = data;
    NewHead->Next = head;
    return NewHead;
}



// INSERTION AT THE GIVEN INDEX 
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;
    struct Node *p = head;
    while (i != index - 1)
    {
        p = p->Next;
        i++;
    }
    ptr->data = data;
    ptr->Next = p->Next;
    p->Next = ptr;
    return head;
}


// INSERTION AT THE END
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    int i;
    struct Node *p = head;
    while (p->Next != NULL)
    {
        p = p->Next;
        i++;
    }
    ptr->Next = p->Next;
    p->Next = ptr;
    ptr->data = data;
    return head;
}


// INSERTION AFTER THE NODE
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->Next = prevNode->Next;
    prevNode->Next = ptr;
    return head;
}

void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // linking each struct data type
    head->data = 12;
    head->Next = second;
    second->data = 15;
    second->Next = third;
    third->data = 25;
    third->Next = fourth;
    fourth->data = 36;
    // terminate  the node at the last
    fourth->Next = NULL;
    printf(" data of second is %d \n", second->data);
    // calling the traversal function
    linkListTraversal(head);
    head = insertAtFirst(head, 98);
    linkListTraversal(head);
    printf("inserction in between\n\n");
    head = insertAtIndex(head, 86, 2);
    linkListTraversal(head);

    printf("inserction At the End\n\n");
    head = insertAtEnd(head, 200);
    linkListTraversal(head);

    printf("inserction At the End\n\n");
    head = insertAtEnd(head, 300);
    linkListTraversal(head);

    printf("inserction At the End\n\n");
    head = insertAtEnd(head, 400);
    linkListTraversal(head);

    printf("inserction After a node\n\n");
    head = insertAfterNode(head,third ,0);
    linkListTraversal(head);
}