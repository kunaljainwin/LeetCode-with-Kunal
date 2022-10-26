class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<=1)
            return false;
        unordered_map<int,int>maps;
        long long total=0;
        maps[0]=-1;
        for(int i=0;i<n;i++){
            total+=nums[i];
                total%=k;
            if(maps.find(total)==maps.end()){
                    maps[total]=i;
            }
            else{
                if(i-maps[total]>1)
                        return true;
            }
            
        }
        return false;
    }
};