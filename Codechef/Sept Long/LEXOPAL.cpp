    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {

            string s,temp;
            cin>>s;
            int l=s.length(),flag=1;
              temp=s;
           for(int i=0;i<l;i++)
            temp[i]=s[l-i-1];

          for(int i=0;i<l;i++)
          {
              if(s[i]!='.' and temp[i]!='.' and s[i]!=temp[i])
              {
                  flag=0;
                  break;
              }

              if(s[i]=='.'&&temp[i]=='.')
                s[i]='a';
              else if(s[i]=='.'and temp[i]!='.')
              {
                  s[i]=temp[i];
              }

          }
          if(flag)
          cout<<s<<endl;
          else
            cout<<"-1"<<endl;

        }
    }
