class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        return list(set(list(range(1,2001))) - set(arr))[k-1]
    
    