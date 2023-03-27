#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;
struct Node*tail;
void create()
{
    int choice;
    while(choice){
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    std::cout << "enter the data" << std::endl;
    cin>>node->data;
     node->prev=NULL;
     node->next=NULL;
    if(head==NULL)
    {
        head=tail=node;
       
    }
    else{
        tail->next=node;
        node->prev=tail;
        tail=node;
    }
     std::cout << "do you want to continue" << std::endl;
    cin>>choice;
    }
}
void insertatbegin()
{
    struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    std::cout << "enter the data" << std::endl;
    cin>>node->data;
     node->prev=NULL;
     node->next=NULL;
     if(head==NULL)
     {
        head=tail=node;
     }
     else{
        head->prev=node;
        node->next=head;
        head=node;
     }
}
void insertatEnd()
{
      struct Node* node=(struct Node*)malloc(sizeof(struct Node));
    std::cout << "enter the data" << std::endl;
    cin>>node->data;
     node->prev=NULL;
     node->next=NULL;
    if(head==NULL)
    {
        head=tail=node;

    }
    else{
        tail->next=node;
        node->prev=tail;
        tail=node;
    }
}
void insertatPosition()
{  
     int position;
    std::cout << "enter the position" << std::endl;
    cin>>position;

	if(position<1)
	{
		std::cout << "invalid positions" << std::endl;
	}
	else if(position==1)
	{
		 insertatbegin();
	}
	else{
		struct Node*ptr=head;
		struct Node*p=(struct Node*)malloc(sizeof(struct Node));
        std::cout << "enter the data" << std::endl;
        cin>>p->data;
        p->prev=NULL;
        p->next=0;
		int i=1;
		while(i<position-1)
		{
			ptr=ptr->next;
			i++;
		}
        p->next=ptr->next;
        p->prev=ptr;
        ptr->next->prev=p;
        ptr->next=p;
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
  cout<<endl;
  insertatbegin();
  traversal(head);
  cout<<endl;
  insertatEnd();
  traversal(head);
  cout<<endl;
  insertatPosition();
   traversal(head);
  cout<<endl;
}