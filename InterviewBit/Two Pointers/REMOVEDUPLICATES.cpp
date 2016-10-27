int Solution::removeDuplicates(vector<int> &A) {
    int ptr=0;
    for(int i=0;i<A.size();i++)
    {
        if(i>0&&A[i]==A[i-1])
        continue;
        else
        {
        A[ptr]=A[i];
        ptr++;
        }


    }
    return ptr;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
