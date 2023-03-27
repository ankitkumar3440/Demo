#include<iostream>
using namespace std;

class first{

    // Member Variable///

   private: 
    int n1=0,n2=0;

    // member Functions///
    
   public:
    void set(int x,int y)
    {
        n1=x;
        n2=y;
    }
    void sum()
    {
        std::cout << n1+n2 << std::endl;
    }
};
int main()
{
    first h1;
    h1.set(10,20);
    h1.sum();
}