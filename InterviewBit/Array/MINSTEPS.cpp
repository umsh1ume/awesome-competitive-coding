// Input : X and Y co-ordinates of the points in order.
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
     if(X.size()==1)
     return 0;
     else
     {
         int ans=0;
         for(int i=0;i<X.size()-1;i++)
         {
             ans+=max(abs(X[i+1]-X[i]),abs(Y[i+1]-Y[i]));
         }
         return ans;
     }
}
