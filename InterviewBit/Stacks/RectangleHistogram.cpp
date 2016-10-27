int Solution::largestRectangleArea(vector<int> &A) {

    stack<int> s;
    int ans=0, area;
    int i=0,top;
    while(i<A.size())
    {
        if(s.empty()||A[i]>=A[s.top()])
        {
            s.push(i++);

        }
        else
        {
            top=s.top();
            s.pop();
            area=A[top]*(s.empty()?i:(i-s.top()-1));
            ans=max(ans,area);
        }

    }
      while(!s.empty())
        {
            top=s.top();
            s.pop();
            area=A[top]*(s.empty()?i:(i-s.top()-1));
            ans=max(ans,area);
        }

    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
