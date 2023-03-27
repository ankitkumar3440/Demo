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
}