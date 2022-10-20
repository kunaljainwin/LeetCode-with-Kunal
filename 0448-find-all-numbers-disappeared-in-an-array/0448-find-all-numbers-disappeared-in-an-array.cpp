class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s;
        for(auto &it:nums)s.insert(it);
        vector<int>ans;
        int n=nums.size();
        int k=0;
        for(int i=1;i<=n;i++)if(s.find(i)!=s.end())k++;
        else ans.push_back(i);
        return ans;
    }
};