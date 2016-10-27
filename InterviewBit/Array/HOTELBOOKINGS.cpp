bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int flag=1;
    int used=0,n=arrive.size();
    vector<pair<int,int> > event;
    for(int i=0;i<n;i++)
    {
        event.push_back(make_pair(arrive[i],1));
        event.push_back(make_pair(depart[i],0));


    }
    sort(event.begin(),event.end());
    for(int i=0;i<event.size();i++)
    {
        if(event[i].second==0&&used>0)
        {
            used--;

        }
        if(event[i].second==1)
        {
            used++;
        }
        if(used>K)
        {
            flag=0;
            break;
        }

    }
    if(flag)
     return 1;

     return 0;


  /*  for(int i=1;i<=mday;i++)
    {
        if(depart.find(i)!=depart.end())
        {
            if(used>0)
            {
                used--;
            }
        }
        if(arrive.find(i)!=arrive.end())
        {
            if(used<)
        }

    }*/
}
