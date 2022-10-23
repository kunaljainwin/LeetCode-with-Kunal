class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int r=0;int n=nums.size();
        sort(nums.begin(),nums.end());
        //find median
        int median;
        if(n%2==0)
            median=(nums[n/2-1]+nums[n/2])/2;
        else
            median=nums[n/2];
        
        for(auto &it:nums)r+=abs(it-median);
        return r;
    }
};