/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        vector<Node*>ans;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            Node* t=q.front();
            q.pop();

            ans.push_back(t);
            if(!t && !q.empty()) q.push(NULL); 
            else if(t){
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
            }
        }

        int sz=ans.size();
        for(int i=0;i<sz;i++){
            if(ans[i]){
                ans[i]->next= ans[i+1];
            }
           
        }
        return root;

        
        
    }
};