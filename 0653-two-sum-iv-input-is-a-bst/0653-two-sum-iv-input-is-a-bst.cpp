/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   bool recursive(set<int>&st,TreeNode*root,int &k){
       if(root==NULL)
           return false;
       if(st.find(k-root->val)!=st.end()){
           return true;
       }
       st.insert(root->val);
      return  recursive(st,root->left,k)||recursive(st,root->right,k);
       
        
    }
    bool findTarget(TreeNode* root, int k) {
        // use unordered set
        set<int>s;
        return recursive(s,root,k);
        
        
    }
};