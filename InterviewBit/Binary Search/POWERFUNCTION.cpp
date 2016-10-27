int poww(int x,int n,int d)
{
    long long ans;
    if(x==0)
    return 0;
    if(n==0)
    return 1;
    int temp=poww(x,n/2,d)%d;
    if(n&1)
    ans= (((x*temp)%d)*(temp)%d);
    else
    {
        ans=(temp*temp)%d;
    }
    if(ans<0)
    ans+=d;
    ans%=d;
    return (int)ans;
}
int Solution::pow(int x, int n, int d) {
    if(x==0)
    return 0;
    if(n==0)
    return 1;

   return poww(x,n,d);
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
