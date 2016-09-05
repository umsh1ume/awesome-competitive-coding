#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main()
{
    int n,q;
    cin>>n>>q;

    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(i&1)//Swapping a[i] and b[i] if i is odd
        {


        int temp=a[i];
        a[i]=b[i];
        b[i]=temp;
        }
        //a will become a0,b1,a2...
    }
    //for(int i=0;i<n;i++)
      //  cout<<a[i]<<" ";

    long long dp1[n],dp2[n];
    dp1[0]=a[0];
    dp2[0]=b[0];
    for(int i=1;i<n;i++)
    {
        dp1[i]=dp1[i-1]+a[i];
        dp2[i]=dp2[i-1]+b[i];
    }
    while(q--)
    {
        int t,l,r;
        cin>>t>>l>>r;
        if(l%2==0)
        {
            t++;
            t%=2;
        }
        l--;r--;
        if(t==1)
        {
            cout<<dp1[r]-dp1[l]+a[l]<<endl;
        }
        else
            cout<<dp2[r]-dp2[l]+b[l]<<endl;

    }


}
