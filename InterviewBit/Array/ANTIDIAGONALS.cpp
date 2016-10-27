vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size(),row=0;
    vector<vector<int> > ans;
    ans.resize(2*n-1);
    for(int i=0;i<n;i++)
    {
        int x=i,y=0;
        while(x!=-1)
        {
            ans[row].insert(ans[row].begin(),A[x][y]);
            x--;
            y++;

        }
        row++;

    }
    for(int j=1;j<n;j++)
    {
        int x=j,y=n-1;
        while(x!=n)
        {
            ans[row].push_back(A[x][y]);
            x++;
            y--;

        }
        row++;
    }
    return ans;



}
