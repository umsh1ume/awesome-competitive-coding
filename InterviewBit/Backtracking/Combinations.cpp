void solve(int n,int k,int index,vector<int > &curr,vector<vector<int> > &ans)
{

      if(curr.size()>=k)
        ans.push_back(curr);
    if(index>n||curr.size()>=k)
    {
        return;
    }


    solve(n,k,index+1,curr,ans);


    curr.push_back(index);
    solve(n,k,index+1,curr,ans);
    curr.pop_back();
}
vector<vector<int> > Solution::combine(int n, int k) {

    vector<int> curr;
    vector<vector<int> > ans;
    solve(n,k,1,curr,ans);
    sort(ans.begin(),ans.end());
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
