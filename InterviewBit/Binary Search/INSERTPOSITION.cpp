int Solution::searchInsert(vector<int> &A, int B) {
    int n=A.size();
    int low=0,high=n-1;
    if(B<A[low])
    return low;
    if(B>A[high])
    return high+1;
    while(low<=high)
    {

        int mid=(low+high)/2;
        if(A[mid]==B)
        {
            return mid;
        }
        else if(A[mid]<B)
        {
            low=mid+1;

        }
        else if(A[mid]>B)
        high=mid-1;

    }
    if(A[low]>B&&A[low-1]<B)
    return low;
    if(A[low+1]>B&&A[low]<B)
    return low+1;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
