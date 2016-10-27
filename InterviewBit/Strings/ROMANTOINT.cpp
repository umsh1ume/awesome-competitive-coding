int value(char a)
{
    if(a=='M')
    return 1000;
    if(a=='D')
    return 500;
    if(a=='C')
    return 100;
    if(a=='L')
    return 50;
    if(a=='X')
    return 10;
    if(a=='V')
    return 5;
    if(a=='I')
    return 1;
    return 0;
}
int Solution::romanToInt(string A) {
    int prev=0;
    int curr=0;
    int ans=0;
    for(int i=A.length()-1;i>=0;i--)
    {
        curr=value(A[i]);
        if(curr>=prev)
        {
            ans+=curr;
        }
        else
        {
            ans=ans-curr;
        }
        prev=curr;
    }
    return ans;


    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
