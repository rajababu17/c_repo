#include<iostream>

using namespace std;


class Node{
    public:
    int data;
     Node *next;
     Node(int data){
         this->data=data;

     }
     Node(){

     }

};

void display(Node *head){
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    

}
void addnode(Node *head,int data){
    Node *temp=head;
    Node *node=new Node(data);
    // node->data=data;
     while (temp->next!=NULL)
    {
        
        temp=temp->next;
    }
    temp->next=node;
    node->next=NULL;
    // return head;


}


// 2 min rukna

int main(){

// Node *head=(Node *)malloc(sizeof(Node)); 
Node *head=new Node[sizeof(Node)];
Node *n1=new Node[sizeof(Node)];
Node *n2=new Node[sizeof(Node)];
Node *n3=new Node[sizeof(Node)];
Node *n4=new Node[sizeof(Node)];

head->data=45;
head->next=n1;
n1->data=100;
n1->next=n2;
n2->data=105;
n2->next=n3;
n3->data=78;
n3->next=n4;
n4->data=460;
n4->next=NULL;
addnode(head,50);
addnode(head,5);
addnode(head,550);
addnode(head,550);
addnode(head,502);
addnode(head,501);
addnode(head,509);
addnode(head,506);
addnode(head,508);
addnode(head,502);
addnode(head,50);
display(head);




    return 0;
}