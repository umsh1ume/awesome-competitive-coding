int Solution::minPathSum(vector<vector<int> > &A) {

    if(A.size()==0)
    return 0;

    int m=A.size();
    int n=A[0].size();
    int dp[m+1][n+1];
       dp[0][0]=A[0][0];

    for(int i=1;i<m;i++)
       dp[i][0]=A[i][0]+dp[i-1][0];


     for(int i=0;i<m;i++)
    for (int j = 1; j < n; j++) {
                    dp[i][j] = A[i][j] + dp[i][j-1];
                    if (i > 0)
                    dp[i][j] = min(dp[i][j], A[i][j] + dp[i-1][j]);
                }
    return dp[m-1][n-1];

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
