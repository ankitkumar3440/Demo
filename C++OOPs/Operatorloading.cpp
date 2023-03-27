#include<iostream>
using namespace std;
class A{
    private:
     int weight;
    public:
    A(int weight_a=0){
       weight = weight_a;
    }
    //Operator Loadings.....////////////////////////////////
    A operator +(A w){
        A temp;
        temp.weight=weight+w.weight;
    }
    ///......./////////////////////////////................
    void printvalue()
    {
        std::cout << "sum is = " <<weight<<std::endl;
    }
};
int main()
{
    int a=12,b=23,c=34;
    int d=a+b+c;
    std::cout << "sum is "<<d<< std::endl;

    //Operator Loadings.....////////////////////////////////
    A person(12);
    A person1(23);
    A temp;
    temp=person+person1;
    temp.printvalue();
    //..............................//////////////////////////
}