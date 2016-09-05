#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,maxi=-INT_MAX;
        cin>>n>>k;
        long long a[n],dp[n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            maxi=max(maxi,a[i]);
        }
        dp[0]=a[0]>0?a[0]:0;
        for(int i=1;i<n;i++)
        {
            if(i-k-1<0)
            {
                dp[i]=max(a[i],dp[i-1]);
            }
            else
            dp[i]=max(dp[i-k-1]+a[i],dp[i-1]);
        }

        dp[n-1]<0?cout<<maxi<<endl:cout<<dp[n-1]<<endl;
    }
}
