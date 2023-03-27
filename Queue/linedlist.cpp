#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
   int data;
   struct Node*next; 
};
struct Node*front=0;
struct Node*rear=0;
void Enqueue(int x)
{
struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
if (front==0&&rear==0)
{
    newnode->data=x;
    rear=front=newnode;
    newnode->next=0;
}
else
{
    newnode->data=x;
    newnode->next=0;
    rear->next=newnode;
    rear=newnode;
}
}
void Dequeue()
{
    if (front==0&&rear==0)
    {
        std::cout << "empty" << std::endl;
    }
    else
    {
        struct Node*temp=front;
        front=front->next;
        free(temp);
    }
}
void peek()
{
     if (front==0&&rear==0)
    {
       std::cout << "empty" << std::endl;
    }
    else
    {
        cout<<front->data<<endl;
    }
}
void Display()
{
    struct Node*temp=front;
    while (temp!=0)
    {
       cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
 Enqueue(4);
  Enqueue(3);
   Enqueue(7);
    Enqueue(4);
     Enqueue(5);
      Display();
    cout<<endl;
     Dequeue();
     Dequeue();
     Dequeue();
 Display();
    cout<<endl;
 peek();
 return 0;
}