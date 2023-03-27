#include<iostream>
using namespace std;
class base{
    public:
    //default constructor//................................................................
    base()
    {
        std::cout << "base class constructor" << std::endl;
    }

    ///...parametrized constructor//................................

    base(int a)
    {
        std::cout << "base class paramerized constructor" << std::endl;
    }
};
class derived:public base{
    public:
    //default constructor//................................................................
    // derived(){
    //     std::cout << "derived class constructor" << std::endl;
    // }
      
       derived():base(){
        std::cout << "derived class constructor" << std::endl;
       }
     ///...parametrized constructor//................................
    // derived(int b)
    // {
    //     std::cout << "derived class paramerized constructor" << std::endl;
    // }

     derived(int b):base( b){
        std::cout << "derived class constructor" << std::endl;
       }
};
int main()
{
   derived a;
   derived b(12);
}
