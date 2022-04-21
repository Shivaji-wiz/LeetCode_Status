class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool: 
        
        def getText(txt):
            stack = []

            for char in txt:
                if char == "#" and stack:
                    stack.pop()
                elif char != "#":
                    stack.append(char)
            
            return "".join(stack)
        
        return (getText(s) == getText(t))    