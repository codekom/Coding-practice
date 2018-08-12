/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> v;
        vector<Node*>::iterator it;
        queue<pair<Node*,int>> q;
        pair<Node*,int> ptr;
        vector<int> tmp;
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
                while(ptr.second==i)
                {
                    tmp.push_back(ptr.first->val);
                    for(it=(ptr.first->children).begin();it!=(ptr.first->children).end();++it)
                    {
                        q.push(make_pair(*it,i+1));
                    }
                    q.pop();
                    if(q.empty())
                        break;
                    ptr = q.front();
                }
                v.push_back(tmp);
                if(q.empty())
                    break;
                i = ptr.second;
            }
        }
        return v;
    }
};
