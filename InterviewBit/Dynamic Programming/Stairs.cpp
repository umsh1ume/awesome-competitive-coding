int Solution::climbStairs(int A) {


    int dp[A+5];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<=A+4;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[A];

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
