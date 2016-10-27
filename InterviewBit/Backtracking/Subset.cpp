void solve(vector<int> & S,int index,vector<int> & curr,vector<vector<int> > &ans)
{
    if(index>=S.size())
    {
        ans.push_back(curr);
        return;
    }

    solve(S,index+1,curr,ans);

    curr.push_back(S[index]);
    solve(S,index+1,curr,ans);
  //  curr.pop_back();
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
   vector<vector<int> > ans;
   vector<int> curr;
   sort(A.begin(),A.end());
   solve(A,0,curr,ans);
  sort(ans.begin(),ans.end());
   return ans;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
