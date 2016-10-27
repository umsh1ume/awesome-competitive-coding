int Solution::cntBits(vector<int> &A) {
    int ones[32];
    memset(ones,0,sizeof(ones));
    long long ans=0;
    for(int i=0;i<32;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if((A[j]>>i)&1)
            ones[i]++;
        }
        ans+=ones[i]*(A.size()-ones[i]);
    }
    ans=ans*2;
    return ans%1000000007;
}
