#include<bits/stdc++.h>
using namespace std;
int dp[200];
int rec(int total)
{


    if(total<0)
        return 100000000;

        if(dp[total]!=-1)
            return dp[total];
    dp[total]=1+min(rec(total-10),rec(total-12));
    return dp[total];

}
int main()
{
    int t;
    cin>>t;

       memset(dp,-1,sizeof(dp));

        dp[0]=0;
        dp[10]=1;
        dp[12]=1;
    while(t--)
    {

        int n;
        cin>>n;

    int ans=rec(n);
    if(ans>n)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;
        }
}
