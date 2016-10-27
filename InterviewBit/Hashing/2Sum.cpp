vector<int> Solution::twoSum(const vector<int> &A, int B) {

    map<int,int> hash;
    vector<int> ans;
    for(int i=0;i<A.size();i++)
    {
        if(hash.find(B-A[i])!=hash.end())
        {
            ans.push_back(hash[B-A[i]]);
            ans.push_back(i+1);
            //cout<<i;
            return ans;
        }
         if(hash.find(A[i])==hash.end())
        hash[A[i]]=i+1;
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
