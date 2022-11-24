class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!binary_search(nums.begin(),nums.end(),target)){
            return {-1,-1};
        }
        
        
        auto l=lower_bound(nums.begin(),nums.end(),target);
        auto r=upper_bound(nums.begin(),nums.end(),target);
        int a,b;

            a=l-nums.begin();
            b=r-nums.begin()-1;
        
        return {a,b};
    }
};