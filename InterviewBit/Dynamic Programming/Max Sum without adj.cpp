int Solution::adjacent(vector<vector<int> > &A) {

    int inc=max(A[0][0],A[1][0]);
    int exc=0;
    for(int i=1;i<A[0].size();i++)
    {
        int temp=max(exc,inc);
        inc=exc+max(A[0][i],A[1][i]);
        exc=temp;
    }
    return max(exc,inc);


    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
