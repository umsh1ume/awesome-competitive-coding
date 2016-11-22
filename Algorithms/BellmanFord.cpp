#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int u;
    int v;
    int wt;
};
int dist[1000];
struct edge e[1000];
void bellman_ford(int s,int vert,int edges)
{
    for(int i=0;i<1000;i++)
        dist[i]=100000;
    dist[s]=0;

    for(int step=1;step<=vert;step++)
    {
        for(int k=0;k<edges;k++)
        {

         int i=e[k].u;
         int j=e[k].v;
         int w=e[k].wt;
         if(dist[j]>dist[i]+w)
         {

             if(step==vert)
             {
                 cout<<"There is a negative cycle"<<endl;
                 return;
             }
             else
             {
                 dist[j]=dist[i]+w;
             }
         }
    }

}
}

int main()
{
    int vert,edges;
    cin>>vert>>edges;

    for(int i=0;i<edges;i++)
    {
        cin>>e[i].u>>e[i].v>>e[i].wt;
    }
    bellman_ford(1,vert,edges);
  for(int i=1;i<=vert;i++)
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
