#include<iostream>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cin>>arr[i][j];
        } 
        }
        	 for(int row=n-2;row>=0;row--){
	        for(int col=0;col<row+1;col++){
	            arr[row][col]+=max(arr[row+1][col],arr[row+1][col+1]);
	        }
	    }
    
	    cout<<arr[0][0]<<"\n";
	} 
}