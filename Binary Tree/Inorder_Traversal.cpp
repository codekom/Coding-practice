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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        TreeNode *tmp=root;
        v.clear();
        if(root != NULL)
        {
            while(true)
            {
                while(tmp->left!=NULL)
                {
                    s.push(tmp);
                    tmp=tmp->left;
                }
                while(tmp->right==NULL)
                {
                    v.push_back(tmp->val);
                    if(s.empty())
                        return v;
                    tmp=s.top();
                    s.pop();
                }
                v.push_back(tmp->val);
                tmp=tmp->right;
            }
        }
        return v;
    }
};
