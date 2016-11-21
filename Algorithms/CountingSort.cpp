#include<bits/stdc++.h>
using namespace std;
#define range 255
void count_sort(int a[],int n)
{
    int count[range+1],output[n];
     memset(count,0,sizeof(count));
     for(int i=0;i<n;i++)
     {
         count[a[i]]++;

     }
     for(int i=1;i<=range;i++)
     {
         count[i]+=count[i-1];
     }
     for(int i=n-1;i>=0;i--)
     {
            output[count[a[i]]-1]=a[i];
            count[a[i]]--;
     }

     for (int i = 0; i < n; i++)
        a[i] = output[i];


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    //Enter a[i] within range(255)
        cin>>a[i];

    count_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

