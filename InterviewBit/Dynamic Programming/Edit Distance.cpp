int Solution::minDistance(string A, string B) {
    int n=A.length();
    int m=B.length();


    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++)
    dp[0][i]=i;
    for(int i=0;i<=m;i++)
    dp[i][0]=i;
    for(int i=1;i<=m;i++)
     for(int j=1;j<=n;j++)
     {
         if(A[j-1]==B[i-1])
         {
             dp[i][j]=dp[i-1][j-1];
         }
         else
         dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
     }

     return dp[m][n];
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
