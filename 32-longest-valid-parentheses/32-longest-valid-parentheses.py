class Solution:
    def longestValidParentheses(self, s: str) -> int:
        
        n = len(s)
        
        stack = []
        stack.append(-1)
        ans = 0
        for i in range(n):
            if s[i]=='(':
                stack.append(i)
            else:
                if (len(stack)!=0):
                    stack.pop()
                
                if (len(stack)!=0):
                    ans = max(ans,i-stack[-1])
                
                else:
                    stack.append(i)
        return ans
        