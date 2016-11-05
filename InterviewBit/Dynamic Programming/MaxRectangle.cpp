int arr[1000];
int maxhisto(int n)
{
    stack<int> s;
    int ans=0,area,i=0,top;
    while(i<n)
    {
        if(s.empty()||arr[i]>arr[s.top()])
        {
            s.push(i++);
        }
        else
        {
            top=s.top();
            s.pop();
           area=arr[top]*(s.empty()?i:(i-s.top()-1));
            ans=max(ans,area);
        }
    }

      while(!s.empty())
        {
            top=s.top();
            s.pop();
            area=arr[top]*(s.empty()?i:(i-s.top()-1));
            ans=max(ans,area);
        }
    return ans;
}
int Solution::maximalRectangle(vector<vector<int> > &A) {

   // int arr[A[0].size()];
    memset(arr,0,sizeof(arr));
    int res=0;

    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j]==1)
            {
                arr[j]++;
            }
            else
            arr[j]=0;


        }
        res=max(res,maxhisto(A[0].size()));
    }
    return res;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
