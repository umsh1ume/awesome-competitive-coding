#include<bits/stdc++.h>
using namespace std;
long long int dp[1000001];
int main()
{

    int t;
    cin>>t;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=1000000;i++)
    {

        dp[i]=dp[i-1]+((i-1)%1000000007)*(dp[i-2]%1000000007);
        dp[i]%=1000000007;
    }
    while(t--)
    {
         for(int i=4;i<=1000000;i++)
    {

        dp[i]=dp[i-1]+((i-1)%1000000007)*(dp[i-2]%1000000007);
        dp[i]%=1000000007;
    }
        int n;
        cin>>n;
        cout<<dp[n]<<endl;


    }
}
