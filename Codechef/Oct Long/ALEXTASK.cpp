#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b>a)
        swap(a,b);
    if(b==0)
        return a;
    return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{

    long long p=a*b;
    return p/gcd(a,b);
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {

            cin>>a[i];

        }
        long long ans=LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {

                ans=min(ans,lcm(a[i],a[j]));
            }
        }
        cout<<ans<<endl;

    }
}
