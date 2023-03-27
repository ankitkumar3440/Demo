#include<iostream>
using namespace std;

class second{

/*Access specifier*/
private :
   int age;
public :

//1..NON-parametrized constructor.. Or Default Constructor/////

   second(){
     age=0;
   }
////////////////////////////////

//2..parametrized constructor..//////////////r/////
second(int x){
    age=x;
}
////////////////////////////////////////////////////

// 3.Copy constructor //////////////////////////////////

second(second &obj1)
{
    age=obj1.age;
}
////////////////////////////////////////////////////

   int getdata(){
    std::cout << "age is " <<age<< std::endl;
   }
};
int main()
{
    //NON-parametrized constructor object call////////////////////////////////

    second obj;
    obj.getdata();

    //parametrized constructor.. object call //////////////r/////
    
    second obj1(12);
    obj1.getdata();

    //...........///////////////////////////////////////..........

//Copy constructor.. object call //////////////r/////
    second obj2(obj1);
    obj2.getdata();
//........../////////////////////////////////////////////////
}