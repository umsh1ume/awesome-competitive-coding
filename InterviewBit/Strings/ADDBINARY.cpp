void makesame(string A,string B)
{


}
string Solution::addBinary(string A, string B) {
   int la=A.length();
    int lb=B.length();
    if(la<lb)
    {
        while(A.length()!=B.length())
        {
            A="0"+A;
        }

    }
    if(la>lb)
    {
        while(A.length()!=B.length())
        {
            B="0"+B;
        }
    }
    string ans="";
    int carry=0,sum=0;
    for(int i=A.length()-1;i>=0;i--)
    {
        sum=((A[i]-'0')+(B[i]-'0')+carry)%2;
        carry=((A[i]-'0')+(B[i]-'0')+carry)/2;
        ans.push_back((char)(sum+'0'));

    }
    if(carry)
    ans.push_back((char)(carry+'0'));
    reverse(ans.begin(),ans.end());
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
