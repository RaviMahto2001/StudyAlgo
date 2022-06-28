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

void Swap(int& a,int& b)
{
    int t = a;
    a = b;
    b = t;
}

int SelectRandomIndex(int l,int h)
{
    return l + rand() % (h-l+1);
}

int Partition(int *A, int p, int r)
{
    int x = A[r];
    int i = p-1;
    for(int j=p;j<r;j++)
    {
        if(A[j]<x)
        {
            i++;
            Swap(A[i],A[j]);
        }
    }
    Swap(A[i+1],A[r]);
    return i+1;
}

void RandomizedQuickSort(int *A,int p,int r)
{
    if (p<r)
    {
        Swap(A[SelectRandomIndex(p,r)],A[r]);
        int q = Partition(A,p,r);
        RandomizedQuickSort(A,p,q-1);
        RandomizedQuickSort(A,q+1,r);
    }
}

int main()
{
    srand(time(0));
    int n = 11;
    int *arr = new int[n];
    assing_random_values_to_array(arr,n);
    cout<<"Array before sort :-\n";
    show(arr,n);
    RandomizedQuickSort(arr,0,n-1);
    cout<<"Array after sort :-\n";
    show(arr,n);
}
