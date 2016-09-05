#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int even=0,dp[s.size()];
    for(int j=s.size()-1;j>=0;j--)
    {
        if((s[j]-'0')%2==0)
        {
              even++;

        }
        dp[j]=even;

    }
    for(int i=0;i<s.size();i++)
        cout<<dp[i]<<" ";
}
