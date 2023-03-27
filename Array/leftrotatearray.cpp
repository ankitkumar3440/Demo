#include<iostream>
#include<vector>
using namespace std;
void leftroatate(int arr[],int n)
{
     int temp=arr[0];
        for(int i=1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
}
int main()
{
    int arr[]={1,2,3,5,6,7,0,10,0,9,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    leftroatate(arr,n);
     for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    return 0;
}