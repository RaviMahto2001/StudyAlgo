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
        x[i] = 30 + rand()% 970;
    }
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
    int n = 10;
    int *arr = new int[n];
    assing_random_values_to_array(arr,n);
    cout<<"Array before sort :-\n";
    show(arr,n);

    InsertionSort(arr,n);

    cout<<"Array after sort :-\n";
    show(arr,n);
}

