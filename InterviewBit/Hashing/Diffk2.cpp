int Solution::diffPossible(const vector<int> &A, int B) {

    map<int,bool> hash;
    for(int i=0;i<A.size();i++)
    {
        if(hash.find(A[i]-B)!=hash.end()||hash.find(B+A[i])!=hash.end())
        {
            return true;
        }
        hash[A[i]]=true;
    }
    return false;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
