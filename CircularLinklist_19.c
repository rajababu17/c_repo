#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void CircularlinkListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf(" The value of the element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct Node *insertAtBegining(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

    struct Node *insertAtLast(struct Node * head, int data)

    {
        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
        struct Node *p = head;
        while (p->next != head)
        {
            p = p->next;
        }
        ptr->data = data;
        p->next = ptr;
        ptr->next = head;
        return head;
    }
    
    int main()
    {

        struct Node *head;
        struct Node *second;
        struct Node *third;
        struct Node *fourth;

        head = (struct Node *)malloc(sizeof(struct Node));
        second = (struct Node *)malloc(sizeof(struct Node));
        third = (struct Node *)malloc(sizeof(struct Node));
        fourth = (struct Node *)malloc(sizeof(struct Node));

        // linking each struct data type and asigning the value.
        head->data = 12;



        
        head->next = second;
        second->data = 15;
        second->next = third;
        third->data = 20;
        third->next = fourth;
        fourth->data = 25;
        fourth->next = head;
        CircularlinkListTraversal(head);

        printf("\n insertion at the begining of the circlar linklist\n");
        head = insertAtBegining(head, 10);
        CircularlinkListTraversal(head);

        printf("\n insertion at the end  of the circlar linklist\n");
        head = insertAtLast(head, 30);
        CircularlinkListTraversal(head);

        printf("\n insertion at the given index  of the circlar linklist\n");
        head = insertAtIndex(head, 14, 1);
        CircularlinkListTraversal(head);

        return 0;
    }
