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
void Merge(int *arr,int p,int q,int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int *la = new int[n1+1];
    int *ra = new int[n2+1];
    for(int i=0;i<n1;i++)
        la[i] = arr[p+i];
    for(int i=0;i<n2;i++)
        ra[i] = arr[q+1+i];

    la[n1] = INT_MAX;
    ra[n2] = INT_MAX;

    int i=0,j=0;
    for(int k=p;k<=r;k++)
    {
        if(la[i]<=ra[j])
        {
            arr[k] = la[i++];
        }
        else
        {
            arr[k] = ra[j++];
        }
    }

}
void MergeSort(int *arr,int p,int r)
{
    if (p<r)
    {
        int q = p + (r-p)/2;  // equivalent to (p+r)/2
        MergeSort(arr,p,q);
        MergeSort(arr,q+1,r);
        Merge(arr,p,q,r);
    }
}

int main()
{
    srand(time(0));
    int n = 100;
    int *arr = new int[n];
    assing_random_values_to_array(arr,n);
    cout<<"Array before sort :-\n";
    show(arr,n);
    MergeSort(arr,0,n-1);
    cout<<"Array after sort :-\n";
    show(arr,n);
}
