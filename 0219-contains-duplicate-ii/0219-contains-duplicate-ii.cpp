class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>maps;
        int n=nums.size();
        
        for(int i=0;i<n;i++)maps[nums[i]].push_back(i);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<maps[nums[i]].size();j++){
                if(abs(i-maps[nums[i]][j])<=k&&maps[nums[i]][j]!=i)
                    return true;
            }
        }
        return false;
    }
};