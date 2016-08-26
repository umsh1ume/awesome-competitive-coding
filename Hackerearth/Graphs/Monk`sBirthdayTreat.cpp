#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> adj[1005];
int bfs(int s)
{
    int z=1;
   queue<int> q;
   q.push(s);
   visited[s]=true;
   while(!q.empty())
   {
       int p=q.front();
       q.pop();
       for(int i=0;i<adj[p].size();i++)
       {
           if(visited[adj[p][i]]==false)
           {
               q.push(adj[p][i]);
               visited[adj[p][i]]=true;

               z++;
           }

       }
   }
   return z;


}

int main()
{

    for(int i=0;i<1005;i++)
        adj[i].clear();
    int n,d,ans=10000;
    cin>>n>>d;
    for(int i=0;i<d;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);

    }
    for(int i=1;i<=n;i++)
    {
        memset(visited,false,sizeof(visited));
        ans=min(ans,bfs(i));
    }
    cout<<ans<<endl;

}
