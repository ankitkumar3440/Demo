#include<iostream>
using namespace std;
class base{
    ///Abstract class..////////////////////////////////
    public:
    virtual void show()=0;
    //..............................//////////
};
class derived1:public base{
  public:
   void show()
   {
    std::cout << "derived1" << std::endl;
   }
};
class derived2:public base{
    public:
      void show()
   {
    std::cout << "derived2" << std::endl;
   }
};
int main()
{
    base *ptr=NULL;
    derived1 a;
    derived2 b;
    ptr=&a;
    ptr->show();
    ptr=&b;
    ptr->show();
    return 0;
}