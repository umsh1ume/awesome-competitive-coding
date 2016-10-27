int Solution::maxSubArray(const vector<int> &A) {

    int max_here=0,ans=A[0],neg=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0)
        neg++;
        ans=max(ans,A[i]);
    }

    if(A.size()==1)
      ans=A[0];
    if(A.size()!=neg)
    {



    for(int i=0;i<A.size();i++)
    {
        max_here+=A[i];
        if(max_here<0)
        {

            max_here=0;
        }
       ans=max(ans,max_here);
    }
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
