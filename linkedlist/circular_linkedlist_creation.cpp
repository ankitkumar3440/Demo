#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node*next;
};
struct Node*head=0;
struct Node*tail;

void create()
{
int choice;
    while (choice)
    {
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    cout<<"enter the data : \n"<<endl;
    cin>>newnode->data;
    struct Node*next=0;
    if (head==0)
    {
      
        head=tail=newnode;
        newnode->next=head;

    }
    else
    {
        tail->next=newnode;
        newnode->next=head;
        tail=newnode;
    }
     cout<<"enter 1 for continue and 0 for exit :\n"<<endl;
     cin>>choice;    
    }
    // cout<<tail->next->data; ///checking for circular linkedlists
}
void traversal()
{
   struct Node* temp=head;
   while(temp->next!=head)
   {
    std::cout << temp->data << std::endl;
    temp=temp->next;
   }
   std::cout << temp->data << std::endl;
}
int main()
{
   create();
   traversal();
}