#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],dp[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        memset(dp,0,sizeof(dp));
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);

        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-2]+a[i],dp[i-1]);

        }
        cout<<"Case "<<j<<": "<<dp[n-1]<<endl;
        j++;

    }
}
