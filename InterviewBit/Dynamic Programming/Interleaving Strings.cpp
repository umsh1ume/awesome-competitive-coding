int Solution::isInterleave(string A, string B, string C) {

    int n=A.length();
    int m=B.length();
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        if(A[i-1]==C[i-1])
          dp[0][i]=dp[0][i-1];

    }
    for(int j=1;j<=m;j++)
    {
        if(B[j-1]==C[j-1])
        dp[j][0]=dp[j-1][0];
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(C[i+j-1]==A[j-1]&&dp[i][j-1]==1)
            {
                dp[i][j]=1;
            }
            else if(C[i+j-1]==B[i-1]&&dp[i-1][j]==1)
            {
                dp[i][j]=1;
            }
            else
            dp[i][j]=0;
        }
    }
    return dp[m][n];
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
