class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        if collections.Counter(s1)!=collections.Counter(s2):
            return False
        if s1 == s2:
            return True
        
        diff = 0
        for x,y in zip(s1,s2):
            if x!=y:
                diff += 1
        return diff == 2
        