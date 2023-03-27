#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,34,56,34,21,12,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        std::cout << count << std::endl;
    }
}