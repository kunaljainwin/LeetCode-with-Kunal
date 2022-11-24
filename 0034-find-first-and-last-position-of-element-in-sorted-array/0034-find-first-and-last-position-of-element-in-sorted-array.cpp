class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!binary_search(nums.begin(),nums.end(),target)){
            return {-1,-1};
        }
        
        
        auto l=lower_bound(nums.begin(),nums.end(),target);
        auto r=lower_bound(nums.begin(),nums.end(),target+1);
        int a,b;
        if(l==nums.end()){
            a=-1;
        }
        else{
            a=l-nums.begin();
        }
        if(r==nums.end()&&*nums.rbegin()!=target){
            b=-1;
        }
        else{
            b=r-nums.begin()-1;
        }
        return {a,b};
    }
};