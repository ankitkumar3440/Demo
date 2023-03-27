#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
  int data;
  struct Node *next;
};
struct Node *head=0;
void create()
{
    int choice;
    while(choice)
    {
        struct Node *newnode,*temp;
        newnode=(struct Node *)malloc(sizeof(struct Node));
          newnode->next=NULL;
    std::cout << "enter the data" << std::endl;
    cin>>newnode->data;
    if(head==NULL)
    {
        temp=head =newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;

    }
    std::cout << "do you want to continue" << std::endl;
    cin>>choice;
    }
}
///length of the linkedlist//.........
int lenght()
{
    int count =0;
    struct Node*temp=head;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void insertatbegin()
{
    struct Node *newnode= (struct Node *)malloc(sizeof(struct Node));
    newnode->next=NULL;
    std::cout << "enter the data fro inserting in the begining" << std::endl;
    cin>>newnode->data;
    struct Node *temp;
    if(head==NULL)
    {
       head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void insertatend()
{
    struct Node *newnode= (struct Node *)malloc(sizeof(struct Node));
    newnode->next=NULL;
    std::cout << "enter the data fro inserting in the end" << std::endl;
    cin>>newnode->data;
    struct Node *temp;
    if(head==NULL)
    {
       head=newnode;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        temp=newnode;
        newnode->next=NULL;
    }
}
void insertatPos()
{
    struct Node *newnode= (struct Node *)malloc(sizeof(struct Node));
    int position;
    std::cout << "enter the position" << std::endl;
    cin>>position;
    int count=lenght();
    if(position>count)
    {
        std::cout << "invalid positions" << std::endl;
    }
    else{
        int i=1;
        struct Node* temp=head;
        while(i<position)
        {
            temp=temp->next;
            i++;
        }
        std::cout << "enter the data" << std::endl;
    cin>>newnode->data;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void traversal(struct Node *temp)
{
    while(temp->next!=NULL)
    {
        std::cout << temp->data << std::endl;
        temp=temp->next;
    }
    std::cout << temp->data << std::endl;
}
int main()
{
    create();
    traversal(head);
    cout<<endl;
    insertatend();
    traversal(head);
    cout<<endl;
    insertatbegin();
    traversal(head);
    cout<<endl;
    insertatPos();
    traversal(head);
}