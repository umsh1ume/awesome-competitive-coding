#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
int BIT[10000000];
void update(int x,int val)
{
    for(;x<=n;x+=x&(-x))
    {
        BIT[x]+=val;
    }

}
int query(int x)
{
    int sum=0;
    for(;x>0;x-=x&(-x))
    {
        sum+=BIT[x];
    }
    return sum;
}
int main()
{
    cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=a[i]%2;
        update(i,a[i]);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==0)
        {
            update(l,r%2-a[l]);
            a[l]=r%2;

        }
        else if(type==1)
        {
            int tot=r-l+1;
            cout<<tot-(query(r)-query(l-1))<<endl;
        }
        else if(type==2) cout<<query(r)-query(l-1)<<endl;
    }

}
/*
7
3 4 1 2 7 8 9
5
1 2 2
*/

