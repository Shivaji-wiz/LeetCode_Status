class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        l = set()
        for i in nums1:
            if i in nums2:
                l.add(i)
                
        return list(l)
        