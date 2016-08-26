#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,sum=0,temp,flag=-1,full=-1;
	    cin>>n;

	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        sum+=temp;
	           if(temp==2)
	           {
	               flag=0;

	           }
	           if(temp==5)
	             full=1;


	    }

	    if(flag==0||full==-1||sum<4*n)
	    cout<<"No"<<endl;
	    else
	    {
	       cout<<"Yes"<<endl;
	    }


	}
	return 0;
}
