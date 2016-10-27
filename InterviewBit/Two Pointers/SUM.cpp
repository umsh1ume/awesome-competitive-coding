int Solution::threeSumClosest(vector<int> &A, int B) {

    sort(A.begin(),A.end());
    int ans=1000000000,sum;
    for(int i=0;i<A.size()-2;i++)
    {
        int l=i+1,r=A.size()-1;
    while(l<r)
    {
        sum=A[i]+A[l]+A[r];
        if(abs(sum-B)<abs(B-ans))
        {
            ans=sum;
        }
        if(sum>B)
        r--;
        else
        l++;

    }
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
