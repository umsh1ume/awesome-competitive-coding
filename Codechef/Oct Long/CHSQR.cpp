#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int a[k][k];
        int b[k];
        int mid=k/2;
        for(int i=0;i<k;i++)
        {
            a[mid][i]=i+1;
        }
        for(int i=mid+1;i<k;i++)
        {

            for(int j=k-1;j>0;j--)
            {
                a[i][j]=a[i-1][j-1];
            }
            a[i][0]=a[i-1][k-1];

        }
        for(int i=mid-1;i>=0;i--)
        {
            for(int j=0;j<k;j++)
            {
                a[i][j]=a[i+1][j+1];

            }
            a[i][k-1]=a[i+1][0];
        }


     for(int i=0;i<k;i++)
     {
         for(int j=0;j<k;j++)
         {

             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
    }
}
