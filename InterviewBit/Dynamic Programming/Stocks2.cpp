int Solution::maxProfit(const vector<int> &A) {
    if(A.size()==0)
    return 0;

    int ans=0;
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i+1]>A[i])
        ans+=A[i+1]-A[i];
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
