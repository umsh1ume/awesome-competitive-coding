#include<bits/stdc++.h>
using namespace std;
void _merge(int A[],int start,int mid,int end)
{
    int p=start,q=mid+1,k=0;
    int temp[end-start+1];
   for(int i=start;i<=end;i++)
    {
        if(p>mid)
        {
            temp[k++]=A[q++];
        }
        else if(q>end)
        {
            temp[k++]=A[p++];
        }
        else if(A[p]<A[q])
        {
            temp[k++]=A[p++];
        }
        else
        {
            temp[k++]=A[q++];
        }


    }
  for(int i=0;i<k;i++)
    A[start++]=temp[i];


}
void mergesort(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);

        _merge(a,start,mid,end);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
