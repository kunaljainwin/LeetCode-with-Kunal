class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // n is even n +ve==n -ve
        int n=nums.size();
        queue<int>a,b;
        for(int i=0;i<n;i++){
        if(nums[i]>0){
            a.push(nums[i]);
        }
        else{
            b.push(nums[i]);
        }
        }
        
        for(int i=0;i<n;i+=2){
            nums[i]=a.front();
            a.pop();
                nums[i+1]=b.front();
            b.pop();
        }
        return nums;
        
    }
};