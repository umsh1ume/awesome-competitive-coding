#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
bool visited[100005];
 long long cost[100005];
long long dfs(int s)
{
    long long z=0;
    visited[s]=true;
    z+=cost[s];
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==false)
        {
            z+=dfs(adj[s][i]);
        }
    }
    return z;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        for(int i=0;i<100005;i++)
            adj[i].clear();
        memset(visited,0,sizeof(visited));
        long long n,m,ans=0;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {  int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        adj[y].push_back(x);
         }
         for(int i=1;i<=n;i++)
            cin>>cost[i];

            for(int i=1;i<=n;i++)
            {
                if(!visited[i])
                {


                    ans=max(dfs(i),ans);

                }

            }
            cout<<ans<<endl;

    }

}
