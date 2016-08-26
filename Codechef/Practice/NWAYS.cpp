/*
   Umesh Malhotra(13119053), IIT Roorkee
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
#define mod 1000000007
#define MOD 1000000007
using namespace std;
ll fact[1000010],invfact[1000010];

ll longpow(ll a, ll b)
{
    ll x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}
void preprocess()
{
   fact[0] = fact[1] = 1;
	for(int i= 2;i<2000000+10;i++)
		fact[i] = (fact[i-1] * i)%MOD;

}
ll comb(ll n, ll k)
{
    if(invfact[k]==-1)
    {
        invfact[k]=longpow(fact[k],mod-2);
        invfact[k]%=mod;
    }
    if(invfact[n-k]==-1)
    {
        invfact[n-k]=longpow(fact[n-k],mod-2);
        invfact[n-k]%=mod;
    }
    return ( ( ( fact[n] * invfact[k] ) % mod ) * invfact[n-k] ) % mod;
}
int main()
{
    preprocess();
    in_T
    {

        long long n,k,ans=0;
        cin>>n>>k;
    ans = ((2LL*fact[k+n+1]*longpow((1LL*fact[k+2]*fact[n-1])%MOD, MOD-2))%MOD -n + MOD)%MOD;
	printf("%lld\n",ans);
	}



}
