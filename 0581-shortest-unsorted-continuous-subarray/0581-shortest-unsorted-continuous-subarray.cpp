class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int end = -1;
        int max = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(max > nums[i]){ // the left value is greater then current value
                end = i; // mark that index with end
                // cout<<end<<" ";
            }
            else{
                max = nums[i];
            }
            
        }
        
        
        
        
        
        int start = 0;
        int min = nums[nums.size() - 1];
        for(int i = nums.size() - 2; i >= 0; i--){
            if(min < nums[i]){ // the right value is smaller then current value
                start = i; // mark that index with start
            }
            else{
                min = nums[i];
            }
        }
        return end - start + 1;
    
        

        
        
        
        
        
        
        
        
        
//         //sort and match O(nlogn) ✅
//         int n=nums.size(),i=0;
//         int j=n-1;
//         vector<int>sorted(nums.begin(),nums.end());
//         sort(sorted.begin(),sorted.end());
//         while(nums[i]==sorted[i])i++;
//         while(nums[j]==sorted[j])j--;
        
//         if(i<j){
//             return j-i+1;
//         }
//         //already sorted case
//         else{
//             return 0;
//         }
//         return -1;
        
        
        
        
        
        
        
//         // two pointer❌❌
//         int n=nums.size(),i=0,j=n-1;
//         while(nums[i]<=nums[i+1])i++;
        
//         while(nums[j]>=nums[j-1])j--;
//         cout<<i<<" "<<j;
//         i++;// start of subarray
//         j--;//end of subarray
        
//         return j-i;
    }
};