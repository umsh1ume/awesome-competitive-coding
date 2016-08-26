/*
   Umesh Malhotra, IIT Roorkee
       "What do you want?Are you fine without it?If yes then go to sleep.If no then do something that will take
       you closer to it.
       All the divinity is within you.You can be anything and everything.You can do anything and everything,
       even without guidance of anyone"
*/
#include<bits/stdc++.h>
#define in_T int t;for(scanf("%d",&t);t--;)
#define in_I(a) scanf("%d",&a)
#define in_F(a) scanf("%lf",&a)
#define in_L(a) scanf("%lld",&a)
#define in_S(a) scanf("%s",a)
#define newline printf("\n")
#define MAX(a,b) a>b?a:b
#define MIN(a,b) a<b?a:b
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define SWAP(a,b) {int tmp=a;a=b;b=tmp;}
#define P_I(a) printf("%d",a)
#define pb push_back
#define ll long long
#define mp make_pair

typedef unsigned long long LL;
using namespace std;
bool visited[100005];
long long dist[100005];
int main()
{
    long long key,lock,n;
    cin>>key>>lock>>n;
    long long a[n+1];
    a[0]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    memset(dist,-1,sizeof(dist));

    queue<long long>q;
    q.push(key);
    dist[key]=0;
    while(!q.empty())
    {
        int fr=q.front();
        q.pop();
        for(int i=1;i<=n;i++)
        {
            long long nw = (fr * a[i]) % 100000;
			if(dist[nw] == -1) {
                  dist[nw]=dist[fr]+1;
                q.push(nw);

            }

        }
    }
      cout<<dist[lock]<<endl;
    }






