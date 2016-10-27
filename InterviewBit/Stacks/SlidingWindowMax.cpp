vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {


    int n=A.size();
    vector<int> ans;
    deque<int> q;
    ans.resize(n-B+1);
    for(int i=0;i<B;i++)
    {
        while(!q.empty()&&A[i]>=A[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);

    }
    for(int i=B;i<n;i++)
    {
        ans[i-B]=A[q.front()];
        while(!q.empty()&&A[i]>=A[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
        while(!q.empty()&&q.front()<=i-B)
        {
            q.pop_front();
        }

    }
    ans[n-B]=A[q.front()];
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
