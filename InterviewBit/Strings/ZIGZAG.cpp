string Solution::convert(string A, int B) {
    if(B==1)
    return A;
    vector< vector<char> > v;
    v.resize(B);
    int dir=0,n=0;
    for(int i=0;i<A.length();i++)
    {
        v[n].push_back(A[i]);
        if(n==0)
         dir=0;
         if(n==B-1)
         dir=1;

         if(dir==0)
         n++;
         else
         n--;
    }
    string ans="";
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            ans=ans+v[i][j];

        }
    }
    return ans;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
