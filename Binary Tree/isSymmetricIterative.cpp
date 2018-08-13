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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL)
            return true;
        TreeNode* a;
        TreeNode* b;
        q.push(root);
        q.push(root);
        while(!q.empty())
        {
            a = q.front();
            q.pop();
            if(q.empty())
                return false;
            b = q.front();
            q.pop();
            if(a->val != b->val)
                return false;
            if(a->left && b->right)
            {
                q.push(a->left);
                q.push(b->right);
            }
            else if(a->left || b->right)
                return false;
            if(a->right && b->left)
            {
                q.push(a->right);
                q.push(b->left);
            }
            else if(a->right || b->left)
                return false;
        }
        return true;
    }
};
