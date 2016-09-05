#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     int a[n],dp[n];
     for(int i=0;i<n;i++)
        cin>>a[i];
     dp[0]=1;
     for(int i=1;i<n;i++)
     {
     	if(a[i-1]<a[i])
     	  dp[i]=dp[i-1]+1;
     	  else
     	  dp[i]=1;
     }
     long long sum=dp[n-1];
     for(int i=n-2;i>=0;i--)
     {
     	if(a[i]>a[i+1]&&dp[i]==dp[i+1])
     	{
     		dp[i]=dp[i+1]+1;
     	}

     	sum+=dp[i];
     }
     cout<<sum<<endl;






}
