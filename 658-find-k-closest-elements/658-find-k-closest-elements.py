class Solution:
    def findClosestElements(self, arr: List[int], k: int, x: int) -> List[int]:
        if k == len(arr):
            return arr
        
        arr = sorted(arr,key = lambda num : abs(num-x))
        return sorted(arr[:k])