#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > adj[10000];
int dist[10000];
bool visited[10000];
void dijkstra(int s)
{
    priority_queue<<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > pq;
    for(int i=0;i<10000;i++)
    {
        dist[i]=INT_MAX;
        visited[i]=false;

    }
    pq.push(make_pair(0,s));
    dist[s]=0;

    while(!pq.empty())
    {
        pair<int,int> tp=pq.top();
        pq.pop();

        if(visited[tp.second])
            continue;
        visited[tp.second]=true;

        for(int i=0;i<adj[tp.second].size();i++)
        {
            int node=adj[tp.second][i].second;
            int wt=adj[tp.second][i].first;
            if(dist[node]>dist[tp.second]+wt)
            {
                dist[node]=dist[tp.second]+wt;
                pq.push(make_pair(dist[node],node));
            }
        }


    }
}
int main()
{
    int n,m;
    cin>>n>>m; //n vertices, m edges
    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back(make_pair(w,b));
        adj[b].push_back(make_pair(w,a));
    }
    dijkstra(1);
    cout<<"distances from 1 are"<<endl;
    for(int i=1;i<=n;i++)
        cout<<dist[i]<<" ";


}
/*
5 6
1 2 3
1 3 2
2 3 4
3 4 3
4 5 2
1 5 1
*/
