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
    int minDiffInBST(TreeNode* root) {
        vector<int> v;
        int mini=INT_MAX;
        minDiff(root,v,mini);
        return mini;
    }
    void minDiff(TreeNode* root,vector<int> &v,int &mini)
    {
        if(root!=NULL)
        {
            minDiff(root->left,v,mini);
            v.push_back(root->val);
            if(v.size()>1)
                mini = min(mini,v[v.size()-1]-v[v.size()-2]);
            minDiff(root->right,v,mini);
        }
    }
};
