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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>out;
        
        levelOT(out,root,0);
        return out;
        
    }
    void levelOT(vector<vector<int>>&vec,TreeNode*root,int n){
        if(root==NULL){
               return;
        }
         
        else{
if(vec.size()<n+1){
                  vec.resize(n+1); 
}
        vec[n].push_back(root->val);

             
        levelOT(vec,root->left,n+1);
        levelOT(vec,root->right,n+1);
        }
        
       
        return ;
    }
};