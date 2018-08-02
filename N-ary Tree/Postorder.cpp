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
    vector<int> postorder(Node* root) {
        stack<Node*> s;
        map<Node*,int> m;
        vector<int> v;
        v.clear();
        m.clear();
        int i=0;
        Node *ptr = root,*tmp;
        if(root!=NULL)
        {
            s.push(root);
            m.insert(make_pair(root,1));
            while(!s.empty())
            {
                tmp=s.top();
                while((tmp->children).size() != 0 && m[tmp]<=(tmp->children).size())
                {
                    int x=m[tmp];
                    s.push(tmp->children[x-1]);
                    m.insert(make_pair(tmp->children[x-1],1));
                    m[tmp]=x+1;
                    tmp=s.top();
                }    
                v.push_back(tmp->val);
                s.pop();
            }
        }
        return v;
    }
};
