#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[s.size()],res=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
            a[i]=-1;
            res++;
            }
            else
                a[i]=1;

        }
        if(res==s.size())  //Edge cases
            cout<<--res<<endl;
        else   //Kadane algorithm
        {


        int max_so=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            max_so+=a[i];
            if(max_so<0)
                max_so=0;
            ans=max(ans,max_so);
        }
        cout<<ans+res<<endl;
        }



    }
}
