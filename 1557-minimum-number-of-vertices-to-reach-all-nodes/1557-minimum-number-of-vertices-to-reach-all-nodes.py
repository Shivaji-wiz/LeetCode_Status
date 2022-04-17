class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        In = [0 for i in range(n)]
        for (i,j) in edges:
            In[j] += 1
        return [i for i in range(n) if In[i]==0]        
        