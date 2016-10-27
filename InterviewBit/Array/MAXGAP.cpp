int Solution::maximumGap(const vector<int> &A) {
    vector<int> v;
    v.resize(A.size());
    for(int i=0;i<A.size();i++)
    {
        v[i]=A[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=1;i<A.size();i++)
    {
        ans=max(ans,v[i]-v[i-1]);
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
