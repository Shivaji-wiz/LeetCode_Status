class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        non_rep=""
        max_len = 0
        for i in s:
            if i in non_rep:
                non_rep = non_rep.split(i)[1]+i
            else:
                non_rep += i
                max_len = max(max_len,len(non_rep))
        return max_len
                
