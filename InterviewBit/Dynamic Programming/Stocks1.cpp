int Solution::maxProfit(const vector<int> &A) {




    if(A.size()==0||A.size()==1)
     return 0;
     int minprice=100000000;
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
         if(minprice>A[i])
         {
             minprice=A[i];
         }
         else if(A[i]-minprice>ans)
         {
             ans=max(ans,A[i]-minprice);
         }

    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
