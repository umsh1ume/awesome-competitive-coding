int Solution::minimumTotal(vector<vector<int> > &A) {



            int n = A.size();

            for (int layer = n-2; layer >= 0; layer--) // For each layer
            {
                for (int i = 0; i <= layer; i++) // Check its every 'node'
                {
                    // Find the lesser of its two children, and sum the current value in the triangle with it.
                    A[layer][i] = min(A[layer+1][i], A[layer+1][i+1]) + A[layer][i];
                }
            }
            return A[0][0];

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
