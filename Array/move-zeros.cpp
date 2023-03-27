#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,6,7,0,10,0,9,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
   // .........//method -1//..........
//     vector<int>v;
//     int count=0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]!=0)
//         {
//             v.push_back(arr[i]);
//         }
//         else{
//             count++;
//         }
//     }
//     for (int i = 0; i < count; i++)
//     {
//         v.push_back(0);
//     }
//     for(int i=0;i<v.size(); i++)
//     {
//         std::cout << v[i] << std::endl;
//     }




   //method--2///.........
   int count=0;
   for(int i=0; i<n; i++)
   {
    if(arr[i]!=0)
    {
        swap(arr[i],arr[count]);
        count++;
            }
   }
   for (int i = 0; i <n; i++)
   {
    std::cout << arr[i] << std::endl;
   }
}