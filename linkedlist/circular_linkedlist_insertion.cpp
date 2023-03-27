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
void insertatbegin()
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
        newnode->next=head;
        head=newnode;
        tail->next=head;
    }
}
void insertatend()
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
        newnode->next=head;
        tail->next=newnode;
        tail=newnode;
    }
}
int getlength()
{
    int count=1;
    struct Node*temp=head;
    while (temp->next!=head)
    {
        count++;
        temp=temp->next;
    }
  return count;
}
void InsertAtIndex(){
 int index,i=1;
   int l=getlength();
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    cout<<"enter the index :\n"<<endl;
    cin>>index;
    struct Node*next=0; 
    if (index==0)
    {
        cout<<"invalid index"<<endl;
    }
else if (index==1)
{
    insertatbegin();
}
else if (index==l)
{
    insertatend();
}
else
{
     cout<<"enter the data for inserting at index : \n"<<endl;;
      cin>>newnode->data;
       struct Node*temp=head;
       while (i<index-1)
       {
        temp=temp->next;
           i++;
       } 
        newnode->next=temp->next;
        temp->next=newnode;              
}
}
int main()
{
   create();
   traversal();
   cout<<endl;
   insertatbegin();
   traversal();
   cout<<endl;
   insertatend();
   traversal();
   cout<<endl;
   InsertAtIndex();
   traversal();
   cout<<endl;
}