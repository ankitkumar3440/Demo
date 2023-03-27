#include<iostream>
using namespace std;
class A{
    public:
     int length;
     int width;
    void printarea(){
        std::cout << "area of triangle is " <<length*width<<std::endl;
    }
};
class B:public A{
 public:
  int height;

  void printvolume()
  {
    std::cout << "volume of cubiod is " <<height*width*length<< std::endl;
  }
};
int main()
{
   B c;
   c.length=10,c.width=80,c.height=20;
   c.printarea();
   c.printvolume();
   return 0;
}