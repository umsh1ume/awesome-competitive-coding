#include<bits/stdc++.h>
using namespace std;
int partition(int A[],int start,int end)
{
    int i=start+1;
    int piv=A[start];
    for(int j=start+1;j<=end;j++)
    {
        if(A[j]<piv)
        {
            swap(A[j],A[i++]);
        }
    }

    swap(A[start],A[i-1]);
    return i-1;

}
void quicksort(int a[],int start,int end)
{
    if(start<end)
    {

        int piv=partition(a,start,end);
        quicksort(a,start,piv-1);
        quicksort(a,piv+1,end);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
