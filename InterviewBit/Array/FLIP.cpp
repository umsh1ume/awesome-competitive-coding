vector<int> Solution::flip(string A) {

 int n=A.length(),minus=0;

 int ar[n];
  vector<int> out;
  for(int i=0; i<n; i++)
  {
        if(A[i]=='1')ar[i]=-1;
        else
        {ar[i]=1;

            minus++;
        }
  }


   int ansl=100000000,ansr=100000000;
  int l=0,here=0,best=0;
  for(int i=0;i<n;i++)
  {
      if(here+ar[i]<0)
      {
          here=0;
          l=i+1;
      }
      else
      {
          here=here+ar[i];
    }
    if(here>best)
    {
        best=here;
        ansl=l;
        ansr=i;
    }

  }

  if(ansl==100000000)
  {
     return vector<int>();
  }
  out.push_back(ansl+1);
  out.push_back(ansr+1);
  return out;



}
