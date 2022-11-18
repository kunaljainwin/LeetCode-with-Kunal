class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        if nums[0]>target:
            return 0
        if nums[-1]<target:
            return len(nums)
        
        
        l=0
        r=len(nums)
        index=0#index of largeest element strictly smaller than target
        while l<=r:
            mid=l+int((r-l)/2)
            if nums[mid]==target:
                return mid
            if nums[mid]<target:
                index=mid
                l=mid+1
            else:
                r=mid-1
                
        return index+1
            