#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100000];
int visited[100000];
int dis[100000];
int vert;
int bfs(int s)
{
    int ans=0,count=0;
    queue<int> q;
    q.push(s);
    dis[s]=0;
    while(!q.empty())
    {
        int fr=q.front();
        q.pop();
        if(visited[fr])
            continue;
        if(dis[fr]==0)
            ans++;
         visited[fr]=1;
         count++;
        for(int i=0;i<adj[fr].size();i++)
        {
            dis[adj[fr][i]]=(dis[fr]+1)%2;
            q.push(adj[fr][i]);
        }
    }
    ans=max(ans,count-ans);
    return ans;

}
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
          for(int i=1;i<100000;i++)
        {
            adj[i].clear();
            visited[i]=0;
            dis[i]=0;
        }

        int n,s,mini=INT_MAX,maxi=0,ans=0;
        set<int> st;
        st.clear();
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            st.insert(a);
            st.insert(b);
            adj[a].push_back(b);
            adj[b].push_back(a);

        }
        vert=st.size();
        for(set<int>::iterator it=st.begin();it!=st.end();it++)
        {
            if(!visited[*it])
            {
                ans+=bfs(*it);

            }
        }
       // for(int i=1;i<=10;i++)
         //   cout<<dis[i]<<" ";
           // cout<<endl;
            cout<<"Case "<<tt<<": "<<ans<<endl;


    }
}
