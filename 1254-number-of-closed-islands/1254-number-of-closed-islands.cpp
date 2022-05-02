class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int r, int c)
    {
        if(r>=grid.size() || r<0)
            return false;
        if(c>=grid[0].size() || c<0)
            return false;
        if(grid[r][c]==1)
            return true;
        grid[r][c]=1;
        bool down=dfs(grid,r+1,c);
        bool right=dfs(grid,r,c+1);
        bool up=dfs(grid,r-1,c);
        bool left=dfs(grid,r,c-1);
        return down && right&& up&& left;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int count=0;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<grid[i].size()-1;j++)
            {
                if(grid[i][j]==0)
                {
                    if(dfs(grid,i,j))
                       count++; 
                }
            }
        }
        return count;
    }
};