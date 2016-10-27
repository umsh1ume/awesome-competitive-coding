string expand(string s,int l,int r)
{
    int n=s.length();
    while(l>=0&&r<=n-1&&s[l]==s[r])
    {
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}

string Solution::longestPalindrome(string A) {
    int n=A.length();

    string ans=A.substr(0,1);
    for(int i=0;i<n;i++)
    {
        string temp=expand(A,i,i);
        if(temp.length()>ans.length())
        {
            ans=temp;
        }

         string temp2=expand(A,i,i+1);
        if(temp2.length()>ans.length())
        {
            ans=temp2;
        }

    }
    return ans;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
