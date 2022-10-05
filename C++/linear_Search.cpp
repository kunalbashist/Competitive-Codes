#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int N, int x)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	   
	}
	return -1;
}
int main()
{
	int arr[]={4, 3, 8, 9, 15, 10, 13};
	int x=15;
	int N=sizeof(arr)/sizeof(arr[0]);
	int result = linearSearch(arr, N, x);
    if(result==-1)
    {
    	cout<<"Element not found";
	}
	else
	{
		cout<<"Element "<< x <<" found at index: "<< result;
		
	}
}
