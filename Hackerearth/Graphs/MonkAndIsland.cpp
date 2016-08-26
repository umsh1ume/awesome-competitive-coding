#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100000];
int visited[100000];
int dist[1000000];
int vert;
void bfs(int s)
{
    for(int i=1;i<=vert;i++)
        dist[i]=INT_MAX;
    dist[1]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        if(visited[f])
            continue;
        visited[f]=1;
        for(int i=0;i<adj[f].size();i++)
        {

            q.push(adj[f][i]);
            dist[adj[f][i]]=min(dist[adj[f][i]],dist[f]+1);

        }

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vert=n;
        for(int i=0;i<=n;i++)
        {
            adj[i].clear();
            visited[i]=0;
        }
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        bfs(1);
        //for(int i=1;i<=vert;i++)
          //  cout<<dist[i]<<" ";
          cout<<dist[n]<<endl;
    }

}
