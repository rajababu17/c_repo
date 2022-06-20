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

struct Node * deleteAtFirst(struct Node * head){
    struct Node * p = head;
    head = head->Next;

    printf("\n%d is Sucessfully deleted\n", p->data);
    free(p);
    return head;
}

struct Node * deleteInBetween(struct Node * head,int index){
    struct Node * q = head;
    int i = 0;
    while (i!=index-1)
    {
        q = q->Next;
        i++;

    }
    struct Node * p ;
    p = q->Next;
    q->Next = p->Next;

    printf("\n%d is Sucessfully deleted at index %d\n", p->data,index);
    free(p);
    return head;
}

void deleteAtLast(struct Node * head){
    struct Node * q = head;
    struct Node * p;
    int i = 0;
    while (q->Next!=NULL)
    {
        p = q;
        q = q->Next;
        i++;
    }
    // struct Node * p=q ;
    
    p->Next=NULL;

    printf("%d is Sucessfully deleted at index %d\n", q->data,i);
    free(q);
    //return head;
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


    // printf("Deletion at the begining\n");
    // head =deleteAtFirst(head);
    // linkListTraversal(head);



    // printf("Deletion in the Between\n");
    // head =deleteInBetween(head,2);
    // linkListTraversal(head);


    printf("Deletion at the End\n");
     deleteAtLast(head);
    linkListTraversal(head);

}