vector<int> Solution::plusOne(vector<int> &A) {

            reverse(A.begin(), A.end());
            vector<int> ans;
            int carry = 1;
            for (int i = 0; i < A.size(); i++) {
                int sum = A[i] + carry;
                ans.push_back(sum%10);
                carry = sum / 10;
            }
            if(carry) {
                ans.push_back(carry%10);
                carry /= 10;
            }
            while (ans[ans.size() - 1] == 0 && ans.size() > 1) {
                ans.pop_back();
            }
            reverse(ans.begin(), ans.end());
            reverse(A.begin(), A.end());
            return ans;




    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
