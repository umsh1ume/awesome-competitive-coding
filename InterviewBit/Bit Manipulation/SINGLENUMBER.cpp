int Solution::singleNumber(const vector<int> &A) {
    if(A.size()==1)
    return A[0];

    int ans=A[0]^A[1];
    for(int i=2;i<A.size();i++)
    {
        ans=ans^A[i];
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
