class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int r=0;
        // lets try to decrease the nth or the number other than n-1 to make array element equal;
        // get smallest element
        int minAi=*min_element(nums.begin(),nums.end());
        for(auto &it:nums)r+=it-minAi;
        return r;
    }
};