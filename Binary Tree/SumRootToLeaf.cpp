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
    
    int sumNumbers(TreeNode* root) {
        int sum=0;
        vector<int> v;
        vector<vector<int>> s;
        vector<int>::iterator it;
        dfs(root,v,s);
        for(auto v:s)
        {
            int tmp=0;
            for(it=v.begin();it!=v.end();++it)
                tmp=tmp*10+(*it);
            sum+=tmp;
        }
        return sum;
    }
    void dfs(TreeNode* root,vector<int> &v,vector<vector<int>> &s)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
            s.push_back(v);
        dfs(root->left,v,s);
        dfs(root->right,v,s);
        v.pop_back();
    }
    
};
