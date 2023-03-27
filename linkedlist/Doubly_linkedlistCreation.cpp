#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
void create()
{
    int choice;
    while(choice){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    std::cout << "enter the data" << std::endl;
    cin>>node->data;
    struct Node * temp;
     node->prev=NULL;
     node->next=NULL;
    if(head==NULL)
    {
        head=temp=node;
       
    }
    else{
        temp->next=node;
        node->prev=temp;
        temp=node;
    }
     std::cout << "do you want to continue" << std::endl;
    cin>>choice;
    }
}
void traversal(struct Node*head)
{
    struct Node*temp=head;
    while(temp!=NULL)
    {
        std::cout << temp->data << std::endl;
        temp=temp->next;
    }
}
int main()
{
  create();
  traversal(head);
}