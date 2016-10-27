/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void inor(TreeNode* A,vector<int> &ans)
 {
     if(A==NULL)
     return;
     inor(A->left,ans);
     ans.push_back(A->val);
     inor(A->right,ans);
     return;
 }
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    inor(A,ans);
    return ans;


    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
