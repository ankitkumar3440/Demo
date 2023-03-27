#include<iostream>
using namespace std;
class base{
   public:
    void  print()
    {
        std::cout << "base class " << std::endl;
    }
};
class derived:public base{
  public:
  //.>>.function overriding...,,-->redefing the  functionality of base class/////
   void print(){
    std::cout << "derived class " << std::endl;
    base::print();

   }
   ///.........
};
int main()
{
  derived c;
  c.print();

}