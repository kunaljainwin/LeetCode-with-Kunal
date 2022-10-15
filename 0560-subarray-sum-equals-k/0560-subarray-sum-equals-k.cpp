class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>maps;
        int ps=0;
        int n=nums.size();
        maps[0]=1;//
        int ans=0;
        for(int i=0;i<n;i++){
            ps+=nums[i];   
            ans+=maps[ps-k];
            maps[ps]++;
          
        }
        return ans;
    }
};