class Solution:
    def countSmaller(self, nums: List[int]) -> List[int]:
        
        arr,res = sorted(nums),[]
        
        for n in nums:
            
            i = bisect_left(arr,n)
            res.append(i)
            del arr[i]
            
        return res
        
        