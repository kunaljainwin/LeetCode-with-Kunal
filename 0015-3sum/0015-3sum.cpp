class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            // declare DS for returning
            // two pointer and conditions to avoid multiple occurences
            if(i==0||(nums[i]!=nums[i-1]))
            {
                int p=i+1,q=n-1;
                while(p<q){
                    int sum=nums[i]+nums[p]+nums[q];
                    if(sum==0){
                        ans.push_back({nums[i],nums[p],nums[q]});
                        while(p<q&&nums[p]==nums[p+1])p++;
                        while(p<q&&nums[q]==nums[q-1])q--;
                       p++;
                        q--;
                    }
                    else if(sum<0)p++;
                    else q--;
                }
            }
        }
        return ans;
    }
};