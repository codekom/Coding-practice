/*
// Definition for a Node.
class Node {
public:
    int val;
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
    vector<int> preorder(Node* root) {
        vector<int> v;
        stack<Node*> s;
        vector<Node*>::reverse_iterator it;
        Node* tmp;
        v.clear();
        if(root!=NULL)
            s.push(root);
        while(!s.empty())
        {
            tmp=s.top();
            v.push_back(tmp->val);
            s.pop();
            for(it=(tmp->children).rbegin();it!=(tmp->children).rend();++it)
            {
                s.push(*it);
            }
        }
        return v;
    }
};
