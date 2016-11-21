#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
int thiscolor[1005];
bool padosi[1005][1005];
vector<int> adj[1005];
bool bfs(int s)
{
    queue<int> q;
    q.push(s);
    //set<int> color;
    //cout<<s<<" color:"<<color.size()+1<<endl;
    visited[s]=true;
    thiscolor[s]=1;
    while(!q.empty())
    {
        int fr=q.front();
        q.pop();
        for(int i=0;i<adj[fr].size();i++)
        {
            if(!visited[adj[fr][i]])
            {
                bool one=false,two=false;
                for(int j=0;j<adj[adj[fr][i]].size();j++)
                {
                    if(thiscolor[adj[adj[fr][i]][j]]==1)
                    {
                        one=true;
                    }
                    if(thiscolor[adj[adj[fr][i]][j]]==2)
                    {
                        two=true;
                    }

                }
                if(one==true&&two==true)
                {
                    return false;
                }
                else if (one ==true&&two==false)
                {
                    thiscolor[adj[fr][i]]=2;
                }
                else
                {
                    thiscolor[adj[fr][i]]=1;
                }
               // cout<<adj[fr][i]<<" color:"<<thiscolor[adj[fr][i]]<<endl;
                visited[adj[fr][i]]=true;
                q.push(adj[fr][i]);
            }
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int possible=1;
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
    {
        padosi[i][j]=0;
        adj[i].clear();
        visited[i]=false;
        thiscolor[i]=0;

    }
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        padosi[a][b]=1;
        padosi[b][a]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(padosi[i][j]==0)
            {
                adj[i].push_back(j);
            }
        }
    }
    possible=bfs(1);
    if(!possible)
        cout<<"NO"<<endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(!visited[i])
                possible=bfs(i);
            if(!possible)
                break;
        }
        if(possible)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


    }

}
/*
8 11
1 2
1 3
1 4
2 3
2 4
3 4
4 5
5 6
5 7
6 7
7 8
*/
