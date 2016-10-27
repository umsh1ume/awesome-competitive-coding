/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode*> s;
    vector<int> ans;
    if(A==NULL)
    return ans;
     s.push(A);
    while(!s.empty())
    {

         TreeNode* temp=s.top();
        ans.push_back(temp->val);
        s.pop();

        if(temp->left)
          s.push(temp->left);
        if(temp->right)
         s.push(temp->right);


    }
    reverse(ans.begin(),ans.end());
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
