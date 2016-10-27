/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL&&B==NULL)
     return true;
     if(A==NULL||B==NULL)
      return false;
      if(A->val!=B->val)
      return false;
      return (isSameTree(A->left,B->left)&&isSameTree(A->right,B->right));
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
