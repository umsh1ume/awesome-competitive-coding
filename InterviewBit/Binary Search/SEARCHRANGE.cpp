vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n=A.size();

    int resl=-1,resr=-1;
    for(int i=0;i<2;i++)
    {
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(A[mid]==B)
        {

            if(i==0)
            {
                 resl=mid;
                high=mid-1;
            }
            if(i==1)
            {
                resr=mid;
                low=mid+1;
            }

        }
        else if(A[mid]>B)
            high=mid-1;
        else
        low=mid+1;
    }
    }
    vector<int>ans;
    ans.push_back(resl);
    ans.push_back(resr);
    return ans;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
