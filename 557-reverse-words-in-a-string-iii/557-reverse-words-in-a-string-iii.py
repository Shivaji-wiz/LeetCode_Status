class Solution:
    def reverseWords(self, s: str) -> str:
        s_list = s.split()
        s1=""
        for i in range(len(s_list)-1):
            e_update = (s_list[i])[::-1]
            s1 += e_update + " "
        
        s1 += s_list[-1][::-1]
        return s1