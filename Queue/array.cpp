
#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void Enqueue(int x)
{
if (rear==N-1)
{
  std::cout << "overflow" << std::endl; 
}
else if (rear==-1&&front==-1)
{
    rear=front=0;
     queue[rear]=x;
}
else
{
    rear++;
     queue[rear]=x;
}
}
void Dequeue(){
   if (front==-1&&rear==-1)
    {
        std::cout << "underflow" << std::endl;
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
       // printf("%d",queue[front]);
        front++;
    }
}
void peek()
{
    if (front==-1&&rear==-1)
    {
        std::cout << "empty" << std::endl;
    }
    else
    {
       std::cout << queue[front] << std::endl;
    } 
}
void Display()
{
    if (front==-1&&rear==-1)
    {
        printf("empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            std::cout << queue[i] << std::endl;
        }
    }
}
int main()
{
Enqueue(4);
Enqueue(5);
Enqueue(6);
Enqueue(7);
Enqueue(7);
Enqueue(7);
 Display();
printf("\n");
 Dequeue();
 Dequeue();
 Display();
printf("\n");
 peek();
 return 0;
}