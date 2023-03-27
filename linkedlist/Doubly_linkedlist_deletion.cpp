#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    struct Node* pre;
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
     node->pre=NULL;
     node->next=NULL;
    if(head==NULL)
    {
        head=tail=node;
       
    }
    else{
        tail->next=node;
        node->pre=tail;
        tail=node;
    }
     std::cout << "do you want to continue" << std::endl;
    cin>>choice;
    }
}
void deleteatbegin()
{
    if(head==NULL)
	{
		std::cout << "empty linkedlist" << std::endl;
	}
	else
	{
		struct Node*ptr=head;
		head=head->next;
	head->pre=NULL;
	free(ptr);
    }
}
void deleteatend()
{
    struct Node*ptr;
    if(tail==NULL)
	{
		std::cout << "empty linkedlist" << std::endl;
	}
	else
{
	ptr=tail;
	
		tail=tail->pre;
		tail->next=NULL;
		
	free(ptr);
}
}
void deleteatposition()
{
    int position,i=1;
    std::cout << "enter the position" << std::endl;
    cin>>position;
	struct Node*temp;
	if(position==1)
	{
		deleteatbegin();
	}
	else 
	{
		struct Node*temp=head;
	while(i<position)
	{
		temp=temp->next;
		i++;
		}	
		temp->pre->next=temp->next;
		temp->next->pre=temp->pre;
		free(temp);
}
}
void traversal()
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
    traversal();
    cout<<endl;
    deleteatbegin();
    traversal();
    cout<<endl;
    deleteatend();
    traversal();
    cout<<endl;
    deleteatposition();
    traversal();
    cout<<endl;
}