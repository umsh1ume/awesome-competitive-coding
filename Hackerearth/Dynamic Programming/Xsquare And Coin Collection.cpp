#include<bits/stdc++.h>
#define in_T int t;for(scanf("%d",&t);t--;)
#define in_I(a) scanf("%d",&a)
#define in_F(a) scanf("%lf",&a)
#define in_L(a) scanf("%lld",&a)
#define in_S(a) scanf("%s",a)
#define newline printf("\n")
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b
#define SWAP(a,b) {int tmp=a;a=b;b=tmp;}
#define P_I(a) printf("%d",a)
#define pb push_back
#define ll long long
#define FOR(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main()
{
    in_T
    {
        int n,k;
        in_I(n);
        in_I(k);
        int a[n+1];
        ll dp[n+1];
        memset(dp,0,sizeof(dp));
        ll ans=0;

      for(int i=1;i<=n;i++)
      {
          cin>>a[i];
          if(a[i]<=k)
          {
              dp[i]=dp[i-1]+a[i];
              ans=max(ans,dp[i]);
          }
          else
            dp[i]=0;
      }
      cout<<ans<<endl;


    }
}
