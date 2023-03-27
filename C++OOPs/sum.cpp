#include<iostream>
using namespace std;
class add{
  private:
   int n1;int n2;
   int n3;
 public:
  add(int n1=0,int n2=0)
  {
    n1=n1;
   n2=n2;
   n3=n1+n2;
  }
  void getdata()
  {
    
    std::cout << "sum is " <<n3<< std::endl;
  }
};
int main()
{
    add sum;
    add sum1(5,10);
    sum.getdata();
    sum1.getdata();
    return 0;
}