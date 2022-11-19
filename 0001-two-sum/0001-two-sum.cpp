class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        // store mp[nums[index]]= index+1
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp[nums[i]]){
                int index=mp[nums[i]]-1;
                return {index,i};
            }
            else{
               mp[target-nums[i]]=i+1;
            }
        }
        return {};
    }
};