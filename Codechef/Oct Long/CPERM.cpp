#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long longpow(long long a, long long b)
{
    long long  x=1,y=a;
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
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        if(n==1||n==0)
            cout<<0<<endl;
   else
   {
    long long ans=longpow(2,n-1)-2;
        cout<<ans<<endl;
   }
    }
}
