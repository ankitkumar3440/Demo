#include<iostream>
using namespace std;
class base{
   public:
    virtual void show()
    {
        std::cout << "base " << std::endl;
    }
};
class derived1:public base
{
    public:
     void show()
     {
        std::cout << "derived1 is class" << std::endl;
     }
};
class derived2:public base
{
   public:
    void show()
    {
        std::cout << "derived 2 class" << std::endl;
    }
};
int main()
{
    base *ptr;
    ptr=NULL;
    derived1 a1;
    derived2 a2;
    ptr=&a1;
    ptr->show();
    ptr=&a2;
    ptr->show();
}