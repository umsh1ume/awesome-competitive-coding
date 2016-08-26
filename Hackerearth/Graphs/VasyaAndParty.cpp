/*
   Umesh Malhotra(13119053), IIT Roorkee
       "What do you want?Are you fine without it?If yes then go to sleep.If no then do something that will take
       you closer to it.
       All the divinity is within you.You can be anything and everything.You can do anything and everything,
       even without guidance of anyone"
*/
#include<bits/stdc++.h>
#define in_T int t;for(scanf("%d",&t);t--;)
#define in_I(a) scanf("%d",&a)
#define in_F(a) scanf("%lf",&a)
#define in_L(a) scanf("%lld",&a)
#define in_S(a) scanf("%s",a)
#define newline printf("\n")
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define SWAP(a,b) {int tmp=a;a=b;b=tmp;}
#define P_I(a) printf("%d",a)
#define pb push_back
#define ll long long
#define mp make_pair
#define mod 1000000007
using namespace std;
bool visited[100005];
long long dist[100005];
vector < int > adj[100010];
int ldrs;
int a[100010];
int mx=0;
void dfs(int s)
{

    visited[s]=true;
    if(mx<a[s])
    {
        mx=a[s];
        ldrs=1;
    }
    else if(mx==a[s])
        ldrs++;

    for(int i=0;i<adj[s].size();i++)
    {

        if(!visited[adj[s][i]])
        {
            dfs(adj[s][i]);


        }
    }
}
int main()
{

    int n,m;
    long long ans=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
    {

        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            ldrs=0;
            mx=0;
            dfs(i);
           ans*=ldrs;
           ans%=mod;
        }
    }
    cout<<ans<<endl;
}
