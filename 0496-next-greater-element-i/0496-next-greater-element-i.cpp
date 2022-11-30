class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        int n=nums2.size();
        stack<int>stk;
        stk.push(-1);
        for(int i=n-1;i>=0;i--){
            if(nums2[i]<stk.top()){
                mp[nums2[i]]=stk.top();
                stk.push(nums2[i]);
                
            }
            else{
                while(!stk.empty()&&nums2[i]>=stk.top())
                    stk.pop();
                if(stk.empty())
                    mp[nums2[i]]=-1;
                else{
                    mp[nums2[i]]=stk.top();
                }
                stk.push(nums2[i]);
                
                
            }
            
        }
        vector<int>ans;
        for(auto &it:nums1){
            ans.push_back(mp[it]);
        }
        
        return ans;
    }
};