int Solution::canJump(vector<int> &A) {

    int reached[A.size()];
    memset(reached,0,sizeof(reached));
    reached[0]=1;
    for(int i=0;i<A.size();i++)
    {
        if(reached[i]==0)
         continue;
         else if(A[i]==0)
         continue;
        else
        {
            for(int j=i;j<=i+A[i];j++)
            {
              reached[j]=1;
              if(j==A.size()-1)
              break;
            }
        }

    }
    if(reached[A.size()-1]==1)
      return 1;
      else
      return 0;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
