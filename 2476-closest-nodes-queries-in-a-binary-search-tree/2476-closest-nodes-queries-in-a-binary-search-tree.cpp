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
    void traverse(TreeNode* root,vector<int>& sorted)
    {
        if(root==NULL)
            return;
        traverse(root->left,sorted);
        sorted.push_back(root->val);
        traverse(root->right,sorted);
    }
    int findSmaller(int key,vector<int>& v)
    {
        int start=0,end=v.size()-1,answer=-1;
        while(start<=end)
        {
            int mid=start+(end-start+1)/2;
            // if(v[mid]==key)
            // {
            //     answer=v[mid];
            //     return ;
            // }
            if(v[mid]<=key)
            {
                answer=max(answer,v[mid]);
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return answer;
    }
    int findGreater(int key,vector<int>& v)
    {
        int start=0,end=v.size()-1,answer=INT_MAX;
        while(start<=end)
        {
            int mid=start+(end-start+1)/2;
            // if(v[mid]==key)
            // {
            //     answer=v[mid];
            //     return;
            // }
            if(v[mid]>=key)
            {
                answer=min(answer,v[mid]);
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return answer==INT_MAX?-1:answer;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> sorted;
        traverse(root,sorted);
        vector<vector<int>> answer;
        for(auto q:queries)
        {
            vector<int> temp;
            temp.push_back(findSmaller(q,sorted));
            temp.push_back(findGreater(q,sorted));
            answer.push_back(temp);
        }
        return answer;
    }
};