int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size();
    int m=A[0].size();
    int i=0,j=m-1,found=0;
    while(i<n&&j>=0)
    {
        if(A[i][j]==B)
        {
            found=1;
            break;
        }
        else if(A[i][j]<B)
        {
            i++;
        }
        else if(A[i][j]>B)
        j--;

    }
    return found;




    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
