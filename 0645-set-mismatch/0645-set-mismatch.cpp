class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n,-1);
        for(auto &it:nums)arr[it-1]++;
        vector<int>ans(2,-1);
        int i=1;
        while(ans[0]<0||ans[1]<0){
            if(arr[i-1]==1)
              ans[0]=i;
            if(arr[i-1]==-1)
              ans[1]=i;
            
        i++;

        }
        
        return ans;
        
    }
};