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
    int ans=0;
    pair<int,int> recursion(TreeNode*root){
        if(!root)
            return {0,0};
        
        
       pair<int,int>p,p1=recursion(root->left);
        pair<int,int>p2=recursion(root->right);
        
        
        long long sum=p1.first+p2.first+root->val;
        int n=p1.second+p2.second+1;
        if(root->val==sum/n)
            ans++;
        p={sum,n};
        return p;
    }
    int averageOfSubtree(TreeNode* root) {
        recursion(root);
        return ans;
    }
};