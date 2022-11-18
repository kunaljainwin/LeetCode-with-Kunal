class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l=0 
        r=len(nums)-1
        ans=[]
        while l<=r:
            a=nums[l]**2
            b=nums[r]**2
            if a>b:
                ans.insert(0,a)
                l+=1
            else:
                ans.insert(0,b)
                r-=1
            
        return ans
                
                