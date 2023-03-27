#include<iostream>
using namespace std;
class divide{
 private:
   int n1,n2,division;
 public:
  divide(int n1=0,int n2=0)
  {
     n1=n1;
     n2=n2;
     division=n1/n2;
  }
  void getdata(){
    std::cout << "division is " <<division<<std::endl;
  }
};
int main()
{
    divide div;
    divide div1(12,4);
    div.getdata();
    div1.getdata();
}