    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,ans=-1,maxi=0,cunt=0;
            cin>>n;
            int a[n];
            memset(a,0,sizeof(a));//storing scores
            for(int i=0;i<n;i++)
            {
                int sz,temp,score=0,bonus=0;
                cin>>sz;
                int counting[7];
                memset(counting,0,sizeof(counting));
                for(int k=0;k<sz;k++)
                {
                    cin>>temp;
                    counting[temp]++;
                }
                int ele=0;
                for(int i=0;i<=6;i++)
                {
                    if(counting[i])
                        ele++;
                }
                if(ele==4)
                    bonus=1;
                else if(ele==5)
                    bonus=2;
                else if(ele==6)
                    bonus=4;
                else bonus=0;
                score=sz+bonus;
                a[i]=score;
               if(maxi<score)
                {
                    maxi=score;
                    ans=i;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(a[i]==maxi)
                    cunt++;
            }
            if(cunt==1)
            {
                if(ans==0)
                    cout<<"chef"<<endl;
                else
                    cout<<ans+1<<endl;
            }
            else
                cout<<"tie"<<endl;
        }
    }

    /*
    4
    3
    7 1 2 3 1 2 3 1
    4 1 2 3 4
    5 1 2 3 4 5
    2
    1 2
    2 3 4
    4
    8 1 2 3 4 1 2 3 4
    8 1 2 3 4 5 6 1 2
    1 1
    1 1
    3
    1 2
    1 3
    1 5
    */
