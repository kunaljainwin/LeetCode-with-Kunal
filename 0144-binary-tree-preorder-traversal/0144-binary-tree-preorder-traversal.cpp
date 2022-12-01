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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>out;
        
        preorder(out,root);
        
        return out;
        
    }
    
    void preorder(vector<int>&vec,TreeNode* root){
        
      if(root==NULL){
          return ;
      }
        
      else{
            vec.emplace_back(root->val);
            preorder(vec,root->left);
            preorder(vec,root->right);
        }
        return ;
    }
};