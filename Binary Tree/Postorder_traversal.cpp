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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> v;
        TreeNode *tmp = root, *ptr = root;
        v.clear();
        if(root != NULL)
        {
            while(true)
            {
                while(ptr->left != NULL)
                {
                    s.push(ptr);
                    ptr = ptr->left;
                }
                while(ptr->right == NULL || ptr->right == tmp)
                {
                    v.push_back(ptr->val);
                    tmp=ptr;
                    if(s.empty())
                        return v;
                    ptr = s.top();
                    s.pop();
                }
                s.push(ptr);
                ptr=ptr->right;
            }
        }
        return v;
    }
};
