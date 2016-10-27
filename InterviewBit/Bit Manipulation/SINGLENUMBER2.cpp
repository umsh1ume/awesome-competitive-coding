int Solution::singleNumber(const vector<int> &A) {
    int ones[33],ans=0;
    memset(ones,0,sizeof(ones));
   for(int i=0;i<32;i++)
   {
       for(int j=0;j<A.size();j++)
       {
           if((A[j]>>i)&1)
           ones[i]++;

       }
       ones[i]%=3;
       ans=ans|(ones[i]<<i);
   }
   return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
