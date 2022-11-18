class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l=0 
        r=len(nums)-1
        ans=[]
        while l<=r:
            if nums[l]**2>nums[r]**2:
                ans.insert(0,nums[l]**2)
                l+=1
            else:
                ans.insert(0,nums[r]**2)
                r-=1
            
        return ans
                
                