class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        if(n<4)
            return {};
        if((long long)nums[0]+nums[1]+nums[2]+nums[3]>target)
            return {};
        for(int i=0;i<n-3;i++){
            if(i==0||nums[i]!=nums[i-1]){
                            for(int j=i+1;j<n-2;j++){
                                if(j==i+1||nums[j]!=nums[j-1]){
                                    //two pointer
                int p=j+1,q=n-1;
                while(p<q){
        
                    if((long long)nums[p]+nums[q]-target+nums[i]+nums[j]==0)
                    {
                        // declare DS for result
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        while(p<q&&nums[p]==nums[p+1])p++;
                        while(p<q&&nums[q]==nums[q-1])q--;
                        p++;q--;
                    }
                    
                    else if((long long)nums[p]+nums[q]-target+nums[i]+nums[j]<0)p++;
                    else q--;
                }
                                }
                
            }

            }
        }
        
        
        
        
        return ans;
    }
};