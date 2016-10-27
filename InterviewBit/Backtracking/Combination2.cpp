void solve(vector<int> &A,int index,int B,vector<int> &curr, vector<vector<int> > &ans)
{
    int sum=0;
    for(int i=0;i<curr.size();i++)
    {
        sum+=curr[i];
    }
    if(sum>B)
     return;
    if(index>=A.size())
    {
        ans.push_back(curr);
        return;
    }

    solve(A,index+1,B,curr,ans);

    curr.push_back(A[index]);
    solve(A,index+1,B,curr,ans);
    curr.pop_back();


}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<int> curr;
    vector<vector<int> > ans;
    vector<vector<int> > result;
    sort(A.begin(),A.end());
    solve(A,0,B,curr,ans);
    sort(ans.begin(),ans.end());
   int i=1;
   while(i<ans.size())
   {
    if(ans[i]==ans[i-1])
    {
        ans.erase(ans.begin()+i);
    }
    else
    i++;
   }
   for(int i=0;i<ans.size();i++)
   {
       int sum=0;
     for(int j=0;j<ans[i].size();j++)
     {
         sum+=ans[i][j];
     }
     if(sum==B)
      result.push_back(ans[i]);
   }
   return result;



    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
