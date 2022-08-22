class Solution:
    def movesToStamp(self, s: str, t: str) -> List[int]:
        a, b = len(s), len(t)
        ans, nxt =  [], ''
        while(t!=nxt):
            nxt = t
            for i in range(b-a+1):
                cur = t[i:i+a]
                if cur!='?'*a and all(cur[k]==s[k] or cur[k]=='?' for k in range(a)):
                    t = t[:i]+'?'*a+t[i+a:]
                    ans.append(i)
        return ans[::-1] if nxt=='?'*b else []        