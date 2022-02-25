class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        x = ''
        for i in digits:
            x += str(i)
        y = str(int(x)+1)
        return y
        