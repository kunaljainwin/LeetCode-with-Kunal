class Solution {
public:
    int helper(vector<int>&dp,vector<int>&nums,int i){
        if(i<0){
            return 0;
        }
        //body 
        if(dp[i]!=-1){
            return dp[i];
        }
        int b=helper(dp,nums,i-1);
       int a=nums[i]+helper(dp,nums,i-2);

        return dp[i]=max(a,b);
    }
    
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        // Lets start robbing from last house will move out when have robbed all possible
        
        helper(dp,nums,n-1);
        
        return dp[n-1];
        
        
        
        
        
        
        // Drawback that you are selecting the alternate node even when you will get better value at next
        
        //   int n = nums.size(), pre = 0, cur = 0;
        // for (int i = 0; i < n; i++) {
        //     int temp = max(pre + nums[i], cur);
        //     pre = cur;
        //     cur = temp;
        //     cout<<cur<<" ";
        // }
        // return cur;
        // if(nums.size()==1){
        //     return nums[0];
        // }
        // for(int i=nums.size()-3;i>=0;i--){
        //     nums[i]=max(nums[i+1],nums[i]+nums[i+2]);
        // }
        // return max(nums[0],nums[1]);
    }
};