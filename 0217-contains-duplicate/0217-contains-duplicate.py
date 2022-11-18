class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        mylist=list(dict.fromkeys(nums))
        
        return len(mylist)<len(nums)