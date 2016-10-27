vector<int> Solution::maxone(vector<int> &A, int B) {
    int l=0,r=0,ansl=0,ansr=0,maxi=0;
    int i=0,j=0;
    int zeros=0;
    vector<int> ans;
    while(i<A.size())
    {

        if(zeros+(A[i]==0) >B)
        {
            int tlen=i-j;
            if(tlen>maxi)
            {
                maxi=tlen;
                ansl=j;
                ansr=i-1;

            }
            while(i>=j&& zeros+(A[i]==0)>B)
            {
                zeros-=(A[j]==0);
                j++;
            }
            zeros+=(A[i]==0);
        }
        else
        {
            zeros+=(A[i]==0);

        }

        i++;
    }
    int t_len=i-j;
    if(t_len>maxi)
    {
        t_len=maxi;
        ansl=j;
        ansr=i-1;
    }
    for(int ha=ansl;ha<=ansr;ha++)
    {
        ans.push_back(ha);
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
