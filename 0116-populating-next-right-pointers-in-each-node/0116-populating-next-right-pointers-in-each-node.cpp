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
        if(root==NULL){
            return root;
        }
        deque<Node*>dq;
        dq.push_back(root);
             Node*temp;
        while(!dq.empty()){
            int n=dq.size();
           for(int i=0;i<n;i++){
            temp=dq.front();
            dq.pop_front();
            // cout<<temp->val<<" ";
        temp->next=dq.front();
             if(i==n-1)
                 temp->next=NULL;
             
            if(temp->right!=NULL){
            dq.push_back(temp->left);
            dq.push_back(temp->right);
            }    
           }
        }
        return root;
    }
};