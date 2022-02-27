class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        data = list(magazine)
        flag = True
        for i in ransomNote:
            if i in data:
                data.remove(i)
            else:
                flag = False
                break
        return flag
        