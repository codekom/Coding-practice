/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;
        else
        {
            int s = sum-root->val;
            bool res = false;
            if(s==0 && root->left == NULL && root->right == NULL)
                return true;
            if(root->left != NULL)
                res = res || hasPathSum(root->left,s);
            if(root->right != NULL)
                res = res || hasPathSum(root->right,s);
            return res;
        }
    }
};
