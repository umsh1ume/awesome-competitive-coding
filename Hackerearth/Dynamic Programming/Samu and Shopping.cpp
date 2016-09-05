#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        long long int a[n][3];
        for(int i=0;i<n;i++)
        {   for(int j=0;j<3;j++)
        {


                cin>>a[i][j];

                if(i>0)
                {
                    a[i][j]=a[i][j]+min(a[i-1][(j+1)%3],a[i-1][(j+2)%3]);
                }
        }

        }





cout<<min(a[n-1][0],min(a[n-1][1],a[n-1][2]))<<endl;


    }
}
