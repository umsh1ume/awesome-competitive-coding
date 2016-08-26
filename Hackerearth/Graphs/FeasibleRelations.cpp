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
bool visited[1000050];
vector < int > adj[1000100];
int parent[1000100];
using namespace std;
void dfs(int s,int ii)
{
    visited[s]=true;
    parent[s]=ii;
    for(int i=0;i<adj[s].size();i++)
    {
        if(!visited[adj[s][i]])
        dfs(adj[s][i],ii);
    }
}
int main()
{

    in_T
    {
        int n,k,flag=1;
        vector<pair<int,int> > bad;
        memset(visited,false,sizeof(visited));
        memset(parent,0,sizeof(parent));
        cin>>n>>k;
        for(int i=0;i<k;i++)
        {
            int x,y;
            string r;
            cin>>x>>r>>y;
            if(r=="=")
            {

                adj[x].pb(y);
                adj[y].pb(x);
            }
            else
            {
                bad.push_back(make_pair(x,y));

            }
        }
        for(int i=1;i<=n;i++)
        {

            if(!visited[i])
            {

                dfs(i,i);
            }
        }
       // for(int i=1;i<=n;i++)
         //   cout<<parent[i]<<" ";

        for(int i=0;i<bad.size();i++)
        {

            int x=bad[i].first;
            int y=bad[i].second;
           // cout<<x<<"x"<<parent[x]<<" "<<y<<"y"<<parent[y]<<endl;
            //cout<<"fl"<<flag<<endl;
            if(parent[x]==parent[y])
            {
                flag=0;
            break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


        for(int i=0;i<=n;i++)
            adj[i].clear();
        bad.clear();



    }
}
