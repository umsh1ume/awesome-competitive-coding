 bool ispossible(vector<int> &V, int M, int curMin) {
            int studentsRequired = 1;
            int curSum = 0;
            for (int i = 0; i < V.size(); i++) {
                if (V[i] > curMin) return false;
                if (curSum + V[i] > curMin) {
                    studentsRequired++;
                    curSum = V[i];
                    if (studentsRequired > M) return false;
                } else {
                    curSum += V[i];
                }
            }
            return true;
        }
int Solution::books(vector<int> &A, int B) {


    int low=*min_element(A.begin(),A.end());
    int high=0,ans=INT_MAX;
    for(int i=0;i<A.size();i++)
      high+=A[i];
       if(B>A.size())
    return -1;

     while(low<=high)
     {
         int mid=(low+high)/2;
         if(ispossible(A,B,mid))
         {
               high=mid-1;
               ans=min(ans,mid);

         }
         else
          low=mid+1;

     }
     return ans;







    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
