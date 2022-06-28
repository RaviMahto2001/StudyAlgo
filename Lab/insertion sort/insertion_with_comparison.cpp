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

int InsertionSort(int *arr,int n)
{
    int comp = 0;

    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(++comp && j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
return comp;
}

int main()
{
    srand(time(0));
    int n = 10;
    int *arr = new int[n];
    assing_random_values_to_array(arr,n);
    cout<<"Array before sort :-\n";
    show(arr,n);

    cout<<"Sorting Array ...\n";
    int nocomp = InsertionSort(arr,n);
    cout<<"Comparisons : "<<nocomp<<endl;

    cout<<"Array after sort :-\n";
    show(arr,n);
}

