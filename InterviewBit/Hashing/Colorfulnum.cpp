int Solution::colorful(int A) {

    string num=to_string(A);
    map<long long ,int> hash;

    for(int l=1;l<=num.length();l++)
    {

        for(int i=0;i<=num.length()-l;i++)
        {
            long long mult=1;
            string temp=num.substr(i,l);
            for(int j=0;j<temp.length();j++)
            {
                mult*= (long long)(temp[j]-'0');


            }
            if(hash.find(mult)!=hash.end())
            return 0;
            hash[mult]=1;

        }

    }
    return 1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
