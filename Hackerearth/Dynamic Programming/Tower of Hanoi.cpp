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
bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first)
    {
        return a.second>b.second;
    }
    return a.first>b.first;
}//Sorting will occur until a[i].first>a[i].second is not true(Finally sorted it should be true)
int main()
{
    in_T
    {
        int n;
        cin>>n;
        ll dp[n];
        memset(dp,0,sizeof(dp));
        vector<pair<ll,ll> >p;
        p.clear();
        p.resize(n);

        FOR(i,0,n)
        cin>>p[i].first>>p[i].second;
        sort(p.begin(),p.end(),comp);

        FOR(i,0,n)
        dp[0]=p[0].second;
        FOR(i,0,n-1)
        {
            FOR(j,i+1,n)
            {
                if(p[j].second<p[i].second&&p[i].first!=p[j].first)
                {
                    dp[j]=max(dp[j],dp[i]+p[j].second);


                }
                else
                {
                    dp[j]=max(p[j].second,dp[j]);
                }


            }

        }

        ll ans=0;
        FOR(i,0,n)
        {
         ans=max(ans,dp[i]);

        }
        cout<<ans<<endl;




    }

    return 0;
}
