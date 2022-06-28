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

bool LinearSearch(int* x,int n,int el)
{
    for(int i=0;i<n;i++)
    {
        if(x[i] == el)
            return true;
    }
    return false;
}

int main()
{
    srand(time(0));
    int n = 100,element;
    int *arr = new int[n];
    assing_random_values_to_array(arr,n);
    cout<<"Array :-\n";
    show(arr,n);
    cout<<"\nEnter the element to search : ";cin>>element;
    if(LinearSearch(arr,n,element))
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
}
