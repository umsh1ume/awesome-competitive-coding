#include<bits/stdc++.h>
using namespace std;
long long solve(long long a[],int l,int r)
{
    long long ans=1000000000000000LL,dist,x=0;
    dist=a[r]-a[l];

    for(int i=l+1;i<=r;i++)
    {


        ans=min(ans,dist-(a[i]-a[i-1]));
    }

    return ans;


}
int main()
{
     ios::sync_with_stdio(false);
   cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        long long a[n],wire=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l=0,r=s.length()-1;
        while(s[l]!='1')
        {
            l++;
        }
        wire+=a[l]-a[0];
        while(s[r]!='1')
        {
            r--;
        }
        wire+=a[n-1]-a[r];


      while(l<r)
      {
          int rr=l+1;
          while(s[rr]!='1')
          {
              rr++;
          }
          wire+=solve(a,l,rr);
          l=rr;

      }
      cout<<wire<<endl;








    }
}
