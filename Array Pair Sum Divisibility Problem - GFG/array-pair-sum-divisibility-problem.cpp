//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        // Code here.
        for(auto &it:nums){
            it=it%k;
            // cout<<it<<" ";
        }
        
        map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        for(auto &it:mp){
            if(it.first==0){
                if(it.second%2!=0){
                    return false;
                }
                continue;
            }
            else if(it.second!=mp[k-it.first]){
                return false;
            }
        }
        return true;
        
        
        
        
        
        
        
        
        
        
        
        //sort+two sum (sum=0 or sum==k) 
        // sort(nums.begin(),nums.end());
        // int l=0,r=n-1;
        // while(l<n-1&&nums[l]==0&&nums[l+1]==0){
        //     l+=2;
        // }
        // while(l<r){
        //     int sum=nums[l]+nums[r];
        //     if(sum%k!=0){
        //         return false;
        //     }
        //     l++;
        //     r--;
        // }
        
        // return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends