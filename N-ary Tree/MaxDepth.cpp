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
    
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        int depth =0;
        for(vector<Node*>::iterator it = root->children.begin();it!=root->children.end();++it)
        {
            depth = max(depth,maxDepth(*it));
        }
        return depth+1;
    }
};
