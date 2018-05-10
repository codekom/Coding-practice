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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        TreeNode* tmp;
        stack<TreeNode*> s;
        v.clear();
        if(root != NULL)
           s.push(root);
        while(!s.empty())
        {
            tmp = s.top();
            s.pop();
            v.emplace_back(tmp->val);
            if(tmp->right != NULL)
                s.push(tmp->right);
            if(tmp->left != NULL)
                s.push(tmp->left);
        }
        return v;
    }
};
