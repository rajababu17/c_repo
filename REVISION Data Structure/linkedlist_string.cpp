#include <iostream>
// #include <string>>
using namespace std;

class Node
{
private:
    string data;
    Node *next;

public:
    Node();
    Node(string);
    void setData(string);
    void setNext(Node *);
    string getData();
    Node *getNext();
};

Node::Node()
{
}
Node::Node(string data)
{
    this->data = data;
}


void Node ::setData(string data)
{
    this->data = data;
}
void Node::setNext(Node *node)
{
    this->next = node;
}
string Node::getData()
{
    return this->data;
}
Node *Node::getNext()
{
    return this->next;
}

class LinkedList
{
private:
    Node *head=NULL;
    Node *tail=NULL;

public:
    Node *getHead()
    {
        return this->head;
    }

    Node *getTail()
    {
        return this->tail;
    }
    void addAtEnd(string data)
    {
        Node *node = new Node(data);
        if (this->head == NULL)
        {
            this->head = this->tail = node;
        }
        else
        {
            this->tail->setNext(node);
            this->tail = node;
        }
    }

    void addAtBeginning(string data)
    {
        Node *node = new Node(data);
        if (this->head == NULL)
        {
            this->head = this->tail = node;
        }
        else
        {
            node->setNext(head);
            head = node;
        }
    }
    void displayLinkedlsit()
    {
        Node *node1=new Node();
        node1 =head;
        while (node1 != NULL)
        {
            cout << node1->getData() << endl;
            node1 = node1->getNext();
        }
        node1=NULL;
        free(node1);
    }
};

int main()
{
    LinkedList list;
    list.addAtBeginning("gaya");
    list.addAtBeginning("patna");
    list.addAtBeginning("haryana");
    list.displayLinkedlsit();
    list.addAtBeginning("delhi");
    list.addAtEnd("mumbai");
    list.addAtEnd("nawada");
    list.addAtEnd("cu");
    list.addAtEnd("punjab");
    cout<<"after inserting at the end"<<endl;
    list.displayLinkedlsit();
    list.displayLinkedlsit();
    cout<<endl;
    

    return 0;
}