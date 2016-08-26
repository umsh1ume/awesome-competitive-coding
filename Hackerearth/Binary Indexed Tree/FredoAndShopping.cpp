/*
   Umesh Malhotra IIT Roorkee
       "What do you want?Are you fine without it?If yes then go to sleep.If no then do something that will take
       you closer to it.
       All the divinity is within you.You can be anything and everything.You can do anything and everything,
       even without guidance of anyone"
*/
#include<bits/stdc++.h>
#define in_T int t;for(scanf("%d",&t);t--;)
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
#define MAX 1000000//MAX SET TO max N
using namespace std;
int BIT[MAX];
void update(int x)
{
    while(x<=MAX)
    {
        BIT[x]++;
        x+=x&-x;
    }
}
int query(int x)
{
    int ans=0;
    while(x>0)
    {
        ans+=BIT[x];
        x-=x&-x;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    a[0]=0;
    b[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n+1);
    for(int i=1;i<=n;i++)// this is data compression
    {
        int rk=lower_bound(b,b+n+1,a[i])-b;
        a[i]=rk+1;
    }
    for(int i=1;i<=n;i++)
    {
        int ans=query(a[i]-1);
        cout<<ans<<" ";
        update(a[i]);
    }

}
