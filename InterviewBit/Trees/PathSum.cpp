/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void check(TreeNode* A,int curr,int B,int &flag)
 {
     if(flag==1)
     return ;
     if(A==NULL)
     return ;
     curr=curr+A->val;
     if(A->left==NULL&&A->right==NULL)
     {
         if(curr==B)
         {
             flag=1;
             return ;
         }
     }
     if(A->left==NULL)
     check(A->right,curr,B,flag);
     else if(A->right==NULL)
     {
         check(A->left,curr,B,flag);
     }
      else
      {
          check(A->left,curr,B,flag);
          check(A->right,curr,B,flag);
      }


 }
int Solution::hasPathSum(TreeNode* A, int B) {
    int flag=0;
    check(A,0,B,flag);
    return flag;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
