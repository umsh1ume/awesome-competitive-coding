int Solution::anytwo(string A) {

   int n=A.length();
   string B=A;
   int dp[n+1][n+1];
   memset(dp,0,sizeof(dp));
   for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    {

        if(A[j-1]==B[i-1]&&i!=j)
        {
            dp[i][j]=dp[i-1][j-1]+1;
        }
        else
        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }

   return dp[n][n];
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
