class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp(nums.begin(),nums.end());
        next_permutation(temp.begin(),temp.end());
        ans.push_back(temp);
        while(nums!=temp){
            next_permutation(temp.begin(),temp.end());
             ans.push_back(temp);
        }
        return ans;
    }
};