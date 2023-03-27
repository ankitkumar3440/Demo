#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
       this->data=data;
       this->next=NULL;
    }
};
void insertAtbegin(Node* &head,int data)
{
    Node * newnode = new Node(data);
    if(head==NULL)
    {
       head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void traversal(Node * &head)
{
    Node*temp=head;
    while(temp->next!=NULL)
    {
        std::cout << temp->data << std::endl;
        temp=temp->next;
    }
    std::cout << temp->data << std::endl;
}
int main()
{
    Node* node=new Node(10);
    Node *head=node;
   insertAtbegin(head,14);
   traversal(head);
}