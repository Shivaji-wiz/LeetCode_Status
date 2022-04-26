class Solution:
    def minCostConnectPoints(self, points: List[List[int]]) -> int:
        conn=set([0])
        n=len(points)
        others=set(_ for _ in range(1,n))
        edges=[]
        res=0
        cur=0
        for i in range(1,n):
            x1,y1=points[cur]
            for v in others:
                x2,y2=points[v]
                man=abs(x1-x2)+abs(y1-y2)
                heapq.heappush(edges,(man,cur,v))
            man,v1,v2=heapq.heappop(edges)
            while v2 in conn:
                man,v1,v2=heapq.heappop(edges)
            res+=man
            conn.add(v2)
            others.remove(v2)
            cur=v2
        return res