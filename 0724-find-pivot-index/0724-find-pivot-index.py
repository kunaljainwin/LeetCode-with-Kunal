class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total=sum(nums)
        s=0;
        for i in range(0,len(nums)):
            s+=nums[i]
            if s-nums[i]==total-s:
                return i
        
        return -1

            
        
        