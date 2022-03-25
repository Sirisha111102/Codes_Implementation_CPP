#include<bits/stdc++.h>
using namespace std;
int main()
{
	//creation of array in cpp
	//array is static in nature
	int n;//length of an array
	cin>>n;//read the length of an array
	//declare an array
	//we can also declare an array by initialising the values
	//int arr[n]={0};-->it indicates the value is 0 at index 0 in array
	int arr[n];//an array with size of n with integer datatype
	//taking array as input
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//to print an array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;//endl or "/n" denotes to print in new line
	}
	//for sorting an array we are using sort function
	//2 6 1 4 9 2
	//arr       arr+n
	sort(arr,arr+n);
	//after sorting an array to print the elements
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}