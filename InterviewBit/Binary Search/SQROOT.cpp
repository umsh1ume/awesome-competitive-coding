int Solution::sqrt(int A) {

    if(A==1||A==0)
    return A;

    int low=1,high=A/2;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid==A/mid)
        return mid;
        else if(mid<A/mid)
        {
            low=mid+1;

        }
        else
        high=mid-1;
    }
    return low-1;


    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
