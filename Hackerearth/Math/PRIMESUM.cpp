#include <iostream>
using namespace std;
int seive[1000005];
void preseive()
{

	seive[0]=seive[1]=1;
	for(int i=2;i<=1000000;i++)
	{
		if(seive[i]==0)
		{
			for(int j=i+i;j<=1000000;j+=i)
			{
				seive[j]=1;
			}
		}
	}

}
int main()
{
	preseive();
    int t;
    /*for(int i=1;i<=15;i++)
      cout<<seive[i]<<" ";*/
    cin>>t;

    long long int sum[1000000];
    sum[0]=0;
    for(int i=1;i<=1000000;i++)
    {
    	if(seive[i]==0)
    	{
    		sum[i]=sum[i-1]+i;
    	}
    	else
    	sum[i]=sum[i-1];
    }
    while(t--)
    {
    	int l,r;
    	cin>>l>>r;
    	cout<<sum[r]-sum[l-1]<<endl;

    }
    return 0;
}
