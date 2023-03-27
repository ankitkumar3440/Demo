#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    // for (int i = 0; i <res; i++)
    // {
    //     std::cout << arr[i] << std::endl;
    // }
    return res;
}
int main() {
   int arr[]={1,2,3,4,5,6,6,7,7,9,9,9,7};
   int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
   int ans=duplicate(arr,n);
   std::cout << ans << std::endl;
       cout<<"After Removal"<<endl;
   
       for(int i = 0; i < ans; i++)
       {
       		cout<<arr[i]<<" ";
       }
    return 0;
}