class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        su = 0
        maxi = -1000000
        
        for i in nums:
            su += i
            maxi = max(maxi,su)
            
            if su<0:
                su = 0
        return maxi
        