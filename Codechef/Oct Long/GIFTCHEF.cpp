    #include<bits/stdc++.h>
    using namespace std;
    #define mod 1000000007
    map<int,int> dp;
    bool matched(string s,string f,int st)
    {
        for(int i=0;i<f.length();i++)
        {
            if(s[st+i]!=f[i])
                return false;
        }
        return true;
    }
    long long rec(string s,string f,int start)
    {
        if(dp.find(start)!=dp.end())
        {
            return dp[start];
        }
        else
        {

        long long ret=0;
        if(start>=s.length()-f.length()+1)
        {
            dp[start]=0;
            return 0;
        }

         ret=(rec(s,f,start+f.length())%mod);
        if(matched(s,f,start)==true)
        {
            ret+= (ret)+1;
            ret=ret%mod;
        }

        for(int i=start+1;i<start+f.length();i++)
        {
            if(matched(s,f,i))
            {


                if(dp.find(i+f.length())!=dp.end())
                {
                    ret=ret+dp[i+f.length()]+1;
                }
                else
                {
                ret=ret+rec(s,f,i+f.length())%mod+1;
                }
                ret=ret%mod;
            }
        }
        dp[start]=ret;
        return dp[start];
        }
    }

    int main()
    {

        int t;
        cin>>t;
        while(t--)
        {

            string s,f;
            cin>>s>>f;
            if(s.length()<f.length())
                cout<<"0"<<endl;
            else
            {


            long long ans=rec(s,f,0);
            cout<<ans<<endl;
            }
          dp.clear();
        }
    }
