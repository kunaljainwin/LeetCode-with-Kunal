class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>s;
        for(auto &it:nums)s[it]++;
        vector<int>ans;
        int n=nums.size();
        int k=0;
        for(int i=1;i<=n;i++)if(s[i])k++;
        else ans.push_back(i);
        return ans;
    }
};