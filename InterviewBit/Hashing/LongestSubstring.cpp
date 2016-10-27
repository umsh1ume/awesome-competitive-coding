int Solution::lengthOfLongestSubstring(string A) {
    map<char,int> hash;
    int i=0,ans=0;
    for(int j=0;j<A.length();j++)
    {
        if(hash.find(A[j])==hash.end()||hash[A[j]]==-1)
        {
            hash[A[j]]=j;
            ans=max(ans,j-i+1);
        }

       else if(hash.find(A[j])!=hash.end())
        {
            int temp=i;
           i=hash[A[j]]+1;
            for(int k=temp;k<hash[A[j]]+1;k++)
            {
                hash[A[k]]=-1;
            }

            hash[A[j]]=j;


        }

    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
