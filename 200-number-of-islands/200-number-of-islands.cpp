class Solution {
public:
    
    void mark_island(vector<vector<char>> &mat,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 || y>= c || mat[x][y] != '1')return;
        
        mat[x][y] = '2';
        
        mark_island(mat,x+1,y,r,c); //down
        mark_island(mat,x,y+1,r,c); //right
        mark_island(mat,x-1,y,r,c); //top
        mark_island(mat,x,y-1,r,c); //left
    }
    
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int rows = grid.size();
        if(rows == 0)return 0;
        
        int cols = grid[0].size();
        
        int no_of_islands = 0;
        
        for(int i=0;i<rows;++i){
            for(int j = 0;j<cols;++j){
                if(grid[i][j] == '1'){
                    mark_island(grid,i,j,rows,cols);
                    no_of_islands += 1;
                }
            }
        }
        return no_of_islands;
    }
};