class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
         if(nums[i]==0){
             nums.erase(nums.begin()+i);
             nums.emplace_back(0);
             i--;
             n--;
            
         }   

                i++;
           
        }
        
    }
};