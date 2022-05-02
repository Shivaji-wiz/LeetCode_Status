class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        res = []
        odd = []
        
        for i in range(len(nums)):
            if nums[i]%2 == 0:
                res.append(nums[i])
                
            else:
                odd.append(nums[i])
                
        res.extend(odd)
        return res
        