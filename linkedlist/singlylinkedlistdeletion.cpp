#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node *head=NULL;
void create(){
    int choice;
    while(choice){
    struct Node *temp,*newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
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
void deleteatbegin()
{
    if(head==NULL)
    {
        std::cout << "linkedlist list is null" << std::endl;
    }
    else{
        struct Node *temp=head;
        head=head->next;
        free(temp);
    }
}
void deleteatend()
{
    if(head==NULL)
    {
         std::cout << "linkedlist list is null" << std::endl;
    }
    else{
        struct Node *temp=head;
        struct Node *prev;
        while(temp->next!=NULL)
        {
           prev=temp;
           temp=temp->next;
        }
        if(head==temp)
        {
            head=NULL;
        }
        else{
            prev->next=NULL;
        }
        free(temp);
    }
}
void deleteatposition()
{
    std::cout << "enter the position" << std::endl;
    int position;
    cin>>position;
    struct Node *temp=head;
    struct Node *nextNode;
    int i=1;
    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }
   nextNode=temp->next;
   temp->next=nextNode->next;
   free(nextNode);
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
    deleteatbegin();
    traversal(head);
    cout<<endl;
    deleteatposition();
     traversal(head);
     cout<<endl;
     deleteatend();
     traversal(head);
    cout<<endl;
}