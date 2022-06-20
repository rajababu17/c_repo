#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
    struct Node *previous;
};
struct Node * reverseTravesal(struct Node *ptr)
{
    struct Node *prev,*current,*next;
    current = ptr;
    prev = NULL;
    
    while (current!=NULL)
    {
        next = current->Next;
        current->Next = prev;
        prev = current;
        current = next;
    }

    return prev;
}
// void reverseTravesal(struct Node *ptr)
// {
//     struct Node *temp = ptr;
//     while (temp->Next != NULL)
//     {
//         temp = temp->Next;
//     }
//     while (temp != NULL)
//     {
//         printf("\nThe reverse Traversal of the linkedlist is %d", temp->data);
//         temp = temp->previous;
//     }
// }


void linkListTraversal(struct Node *ptr)
{
    while (ptr != NULL)

    {
        printf(" The value of the element is %d\n", ptr->data);
        ptr = ptr->Next;
    }
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
    head->previous = NULL;
    second->data = 15;
    second->Next = third;
    second->previous = head;
    third->data = 25;
    third->Next = fourth;
    third->previous = second;
    fourth->data = 36;
    fourth->previous = third;
    // terminate  the node at the last
    fourth->Next = NULL;
    // calling the traversal function
    linkListTraversal(head);
    head=reverseTravesal(head);
    linkListTraversal(head);
    linkListTraversal(head);
}