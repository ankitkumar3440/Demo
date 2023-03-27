#include<iostream>
using namespace std;
#define N 5
int st1[N];
int st2[N];
int top1=-1;
int top2=-1;
int count=0;
void push1(int x)
{
    if(top1==N-1)
    {
        std::cout << "stack is full" << std::endl;
    }  
    else{
        top1++;
        st1[top1]=x;
    }  
}
void push2(int x)
{
    if(top2==N-1)
    {
        std::cout << "stack is full" << std::endl;
    }  
    else{
        top2++;
        st2[top2]=x;
    }  
}
int pop1()
{
    return st1[top1--];
}
int pop2()
{
    return st2[top2--];
}
void enqueue(int x)
{
 push1(x);
 count++;
}
void dequeue()
{
    if(top1==-1&&top2==-1)
    {
        std::cout << "empty" << std::endl;
    }
    for(int i=0; i<count; i++)
    {
       int a=pop1();
        push2(a);
    }
    int b=pop2();
    count--;
    for(int i=0; i<count; i++)
    {
       int a=pop2();
        push1(a);
    }
}
void traversal()
{
    for(int i=0;i<=top1;i++)
    {
        std::cout <<st1[i]<< std::endl;
    }
}
int main()
{
   enqueue(8);
   enqueue(7);
   enqueue(9);
   dequeue();
   traversal();
}