class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        ans =[];
        s=0;
        for i in nums:
            s+=i;
            ans.append(s)
            
        return ans;
        