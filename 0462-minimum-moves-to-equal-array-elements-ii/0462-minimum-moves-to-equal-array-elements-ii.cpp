class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int r=0;int n=nums.size();
        // sort(nums.begin(),nums.end());
        //find median
        nth_element(nums.begin(),nums.begin()+(n/2),nums.end());
        int median=nums[n/2];
        // if(n%2==0)
        //     median=(nums[n/2-1]+nums[n/2])/2;
        // else
        //     median=nums[n/2];
        
        for(auto &it:nums)r+=abs(it-median);
        return r;
    }
};