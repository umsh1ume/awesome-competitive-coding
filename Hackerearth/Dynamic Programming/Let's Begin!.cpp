#include<bits/stdc++.h>
using namespace std;
int dp[1000006];
int rec(int total)
{
    if(total<0)
        return 10000000;
    if(dp[total]!=-1)
    {
        return dp[total];
    }
    dp[total]=1+min(min(rec(total-2),rec(total-3)),min(rec(total-5),rec(total-7)));
    return dp[total];

}
int main()
{
    int t;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    while(t--)
    {
        int n;
        cin>>n;
        if(rec(n)>n)
            cout<<"-1"<<endl;
        else
        cout<<rec(n)<<endl;


    }
}
