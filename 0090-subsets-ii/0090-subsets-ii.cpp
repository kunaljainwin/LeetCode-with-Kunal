class Solution {
public:
    void recursion(vector<vector<int>>&ans,vector<int>& nums,vector<int>temp,int i){
        if(i<0){
            ans.push_back(temp);
            return;
        }
        recursion(ans,nums,temp,i-1);
        temp.push_back(nums[i]);
        recursion(ans,nums,temp,i-1);
        return ;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        recursion(ans,nums,{},n-1);
        set<vector<int>>s;
        for(auto &it:ans)s.insert(it);
        
        return vector<vector<int>>(s.begin(),s.end());
    }
};