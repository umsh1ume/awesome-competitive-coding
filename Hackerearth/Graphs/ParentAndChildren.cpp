#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
int dist[100005];
void bfs(int s)
{
    memset(dist,-1,sizeof(dist));
    queue<int> q;
    q.push(s);
    dist[s]=0;

    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(int i=0;i<adj[p].size();i++)
        {
            if(dist[adj[p][i]]==-1)
            {
                dist[adj[p][i]]=dist[p]+1;
                q.push(adj[p][i]);
            }
        }
    }
}
int main()
{
    int t;
    t=1;
    while(t--)
    {
        for(int i=0;i<100005;i++)
            adj[i].clear();
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bfs(1);
        int q;
        cin>>q;
        while(q--)
        {
            int chut,lund;
            cin>>chut>>lund;
            if(dist[chut]<dist[lund])
                cout<<chut<<" parent of "<<lund<<endl;
            else
                cout<<lund<<" parent of "<<chut<<endl;
        }


    }
}
