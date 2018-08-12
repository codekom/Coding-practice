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
    int ans=0,depth=1;
    int maxDepth(TreeNode* root) {
        maxDepthRec(root,depth);
        return ans;
    }
    void maxDepthRec(TreeNode* ptr, int depth)
    {
        if(ptr==NULL)
            return;
        if(ptr->left==NULL && ptr->right==NULL)
            ans = max(ans,depth);
        maxDepthRec(ptr->left,depth+1);
        maxDepthRec(ptr->right,depth+1);
    }
};
