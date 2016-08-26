#include<bits/stdc++.h>
using namespace std;
int n,m,k1,k2;
int dist1[110][110],dist2[110][110];
int Cells[110][110];
void bfs(int a,int b,int counter,int k,int dp[][110])
{
    queue<pair<pair<int,int>,int > > q;
    pair <pair<int,int>,int>  temp;
    temp.first.first=a;
    temp.first.second=b;
    temp.second=counter;
    q.push(temp);
    while(!q.empty())
    {
        pair<pair<int,int>,int> p=q.front();
        q.pop();
        int x=p.first.first;
        int y=p.first.second;
        int dist=p.second;
        if(Cells[x][y]==0&&dp[x][y]==-1)
        {
            dp[x][y]=dist;
        for(int i=0;i<=k;i++)
        {
            for(int j=0;j<=k;j++)
            {
                if(i+j<=k)
                {


                if(x+i<n&&y+j<m)
                {
                    q.push(make_pair(make_pair(x+i,y+j),dist+1));

                }
                if(x-i>=0&&y-j>=0)
                {
                    q.push(make_pair(make_pair(x-i,y-j),dist+1));
                }
                if(x-i>=0&&y+j<=m)
                {
                     q.push(make_pair(make_pair(x-i,y+j),dist+1));
                }
                if(x+i<=n&&y-j>=0)
                {
                    q.push(make_pair(make_pair(x+i,y-j),dist+1));
                }

                }
            }
        }
        }

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans=1000000000;
        cin>>n>>m>>k1>>k2;
        memset(dist1,-1,sizeof(dist1));
        memset(dist2,-1,sizeof(dist2));
        memset(Cells,1,sizeof(Cells));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>Cells[i][j];
            }
        }
        bfs(0,0,0,k1,dist1);
        bfs(0,m-1,0,k2,dist2);
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(dist1[i][j]!=-1&&dist2[i][j]!=-1)
               ans=min(ans,max(dist1[i][j],dist2[i][j]));
           }
       }
       if(ans==1000000000)
       cout<<"-1"<<endl;
       else
        cout<<ans<<endl;


    }

}
