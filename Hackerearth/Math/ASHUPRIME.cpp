#include <iostream>
using namespace std;
int seive[1000005];
int count[1000005];
int main()
{

	 seive[0]=1;
    seive[1]=1;
    for(int i=2;i<=1000000;i++)
    {
    	if(seive[i]==0)
    	{
    		int ans=1;
    	for(int j=i*2;j<=1000000;j+=i)
    	{

    		if(seive[j]==0)
    		{
    			ans++;
    			seive[j]=1;

    		}
    		count[i]=ans;

    	}
    	}
    }


    int t;
    cin>>t;
    //int seive[100005];
   //for(int i=0;i<100005;i++)



   // memset(count,0,sizeof count);



    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<count[n]<<endl;
    }
}
