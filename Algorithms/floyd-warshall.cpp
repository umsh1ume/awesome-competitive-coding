#include<bits/stdc++.h>
using namespace std;
int dist[1000][1000];
vector<pair<int,int> > adj[10000];
void floyd_warshall(int n)
{

    for(int i=0;i<1000;i++)
    {
        dist[i][i]=0;
    }


   for(int k = 1; k <= n; k++){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            dist[i][j] = min( dist[i][j], dist[i][k] + dist[k][j] );
        }
    }
}
}
int main()
{


    int n,m;
    cin>>n>>m;
     for(int i=1;i<=100;i++)
     for(int j=1;j<=100;j++)
     {
         dist[i][j]=100000;
     }


    for(int i=0;i<m;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back(make_pair(w,b));
        adj[b].push_back(make_pair(w,a));
        dist[a][b]=w;
        dist[b][a]=w;
    }



    floyd_warshall(n);

   for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
    {
        cout<<dist[i][j]<<" ";
    }
    cout<<endl;
    }




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
