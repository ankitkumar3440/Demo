#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void leaders(int arr[],int n)
{
    vector<int>v;
   int leader=arr[n-1];
   v.push_back(leader);
   for(int i=n-2;i>=0;i--)
   {
    if(arr[i]>leader){
        leader=arr[i];
        v.push_back(leader);
    }
   }
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
    std::cout << v[i] << std::endl;
   }
}
int mian()
{
 int arr[]={12,13,16,14,10,6,4};
 int n=sizeof(arr)/sizeof(arr[0]);
 leaders(arr,n);
}