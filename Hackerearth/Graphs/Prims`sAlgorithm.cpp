#include<bits/stdc++.h>
using namespace std;
typedef pair<long long,int> PII;
vector<PII> adj[10005];
bool marked[10005];
long long prim(int x)
{
    long long ans=0;
     priority_queue<PII,vector<PII>,greater<PII> > pq;
    Q.push(make_pair(0,x));
    PII p;
    while(!Q.empty())
    {
        p=Q.top();
        Q.pop();
        x=p.second;
        if(marked[x])
            continue;
        ans+=p.first;
        marked[x]=true;
        for(int i=0;i<adj[x].size();i++)
        {
            if(marked[adj[x][i].second]==false)
            {
                Q.push(adj[x][i]);

            }
        }

    }
    return ans;

}
int main()
{
    int vertices,edges;
    cin>>vertices>>edges;
    long long minmst;
    for(int i=0;i<edges;i++)
    {
        int x,y;
        long long w;
        cin>>x>>y>>w;
        adj[x].push_back(make_pair(w,y));
        adj[y].push_back(make_pair(w,x));
    }
    minmst=prim(1);
    cout<<minmst<<endl;

}
/*
5 6
1 2 3
1 3 2
2 3 4
3 4 5
3 5 1
4 5 6
*/
