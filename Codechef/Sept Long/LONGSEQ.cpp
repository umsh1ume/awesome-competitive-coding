#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string num;
        cin>>num;
        int ones=0,l=num.length();
        for(int i=0;i<num.length();i++)
        {
            if(num[i]=='1')
                ones++;
        }
        if(ones==1||ones==l-1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
