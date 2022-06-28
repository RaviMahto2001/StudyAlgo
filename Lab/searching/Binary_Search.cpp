#include<iostream>
#include<climits>
#include<ctime>
using namespace std;

void show(int *x,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void assing_random_values_to_array(int *x,int n)
{
    for(int i=0;i<n;i++)
    {
        x[i] = 30 + rand()% 971;
    }
}

bool BinarySearch(int *x,int n,int el)
{
    int mid = 0,start = 0,last = n-1;
    while(start<=last)
    {
        mid = (start + last)/2;
        if(x[mid] == el)
            return true;
        else if(x[mid] < el)
            start = mid + 1;
        else
            last = mid - 1;
    }
return false;
}

void InsertionSort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    srand(time(0));
    int n = 100,element;
    int *arr = new int[n];
    assing_random_values_to_array(arr,n);
    cout<<"Array :-\n";
    show(arr,n);
    InsertionSort(arr,n);
    cout<<"Sorted Array :-\n"<<endl;
    show(arr,n);
    cout<<"\nEnter the element to search : ";cin>>element;
    if(BinarySearch(arr,n,element))
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
}
