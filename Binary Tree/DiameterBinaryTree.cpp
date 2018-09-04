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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        return diameter(root)-1;
    }
    int diameter(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left_height = height(root->left);
        int right_height = height(root->right);
        int left_diameter = diameter(root->left);
        int right_diameter = diameter(root->right);
        return max(1+left_height+right_height,max(left_diameter,right_diameter));
    }

    int height(TreeNode* root)
    {
        int lh,rh;
        if(root==NULL)
            return 0;
        lh = height(root->left);
        rh = height(root->right);
        return 1 + max(lh,rh);
    }
};
