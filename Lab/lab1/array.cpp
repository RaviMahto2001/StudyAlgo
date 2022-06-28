#include<iostream>
#include<climits>
using namespace std;
void show(int* arr,int n)
{
	cout<<"Array :- "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void insertionsort(int* arr,int n)
{
	for(int j=1;j<n;j++)
	{	
		int key = arr[j];
		int i = j-1;
		while(i>=0 && key<arr[i])
		{
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array :- \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	show(arr,n);
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
			min = arr[i];
		if(arr[i]>max)
			max = arr[i];
	}
	cout<<"Min : "<<min<<endl;
	cout<<"Max : "<<max<<endl;
	
	cout<<"Sorting Array..."<<endl;
	insertionsort(arr,n);
	cout<<"Sorting Completed"<<endl;
	show(arr,n);
return 0;
}