/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 int height(TreeNode* A,int &ans)
 {
     if(A==NULL)
     {
         return 0;
     }
     int l=height(A->left,ans);
     int r=height(A->right,ans);
     if(abs(l-r)>1)
     {
         ans=0;
     }
      return max(l,r)+1;
 }
int Solution::isBalanced(TreeNode* A) {
     int ans=1;
    int h=height(A,ans);
    return ans;



    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
