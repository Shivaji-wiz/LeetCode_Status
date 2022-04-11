class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m, n = len(grid), len(grid[0])
        
        def reverse(l,r):
            while l <= r:
                lr, lc = l//n, l%n
                rr, rc = r//n, r%n
                grid[lr][lc], grid[rr][rc] = grid[rr][rc], grid[lr][lc]
                l += 1
                r -= 1

        k = k%(m*n)
        reverse(0, m*n-1)
        reverse(0,k-1)
        reverse(k, m*n-1)
        return grid
        