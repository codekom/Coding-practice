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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        vector<vector<int>> v;
        vector<int> tmp;
        pair<TreeNode*,int> ptr;
        tmp.clear();
        v.clear();
        if(root!=NULL)
        {
            q.push(make_pair(root,0));
            ptr = q.front();
            int i=0;
            while(!q.empty())
            {
                tmp.clear();
                while(i==ptr.second)
                {
                    tmp.push_back(ptr.first->val);
                    if(ptr.first->left!=NULL)
                        q.push(make_pair(ptr.first->left,i+1));
                    if(ptr.first->right!=NULL)
                        q.push(make_pair(ptr.first->right,i+1));
                    q.pop();
                    if(q.empty())
                        break;
                    ptr=q.front();
                }
                v.push_back(tmp);
                if(q.empty())
                    return v;
                i=ptr.second;
            }
        }
        return v;
    }
};
