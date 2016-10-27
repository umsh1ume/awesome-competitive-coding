string Solution::longestCommonPrefix(vector<string> &A) {
     string ans="";
     if (A.size() == 0)
     return ans;

            for (int i = 0; i < A[0].length(); i++) {

                               bool possible = true;
                for (int j = 1; j < A.size(); j++) {
                    if (i >= A[j].length() || A[j][i] != A[0][i]) {
                        possible = false;
                        break;
                    }
                }
                if (!possible) break;
                ans.push_back(A[0][i]);
            }
            return ans;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
