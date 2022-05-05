class Solution {
public:
    
    pair<int,int> dir[4] = {{0,1},{0,-1},{1,0},{-1,0}};
    
    bool boundaryCheck(int row, int col, int n, int m){
        return row<0 ||col<0 || row>=n || col>=m;
    }
    
    void dfs(vector<vector<int>>& heights,vector<vector<bool>>& visit,int row,int col){
        int nr = heights.size();
        int nc = heights[0].size();
        
        visit[row][col] = true;
        
        for(int i = 0;i<4;i++){
            int curr_x = row + dir[i].first;
            int curr_y = col + dir[i].second;
            
            if(!boundaryCheck(curr_x,curr_y,nr,nc) && !visit[curr_x][curr_y] && heights[curr_x][curr_y] >= heights[row][col]){
                dfs(heights, visit, curr_x, curr_y);
            }
        }
    }
    
        
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int nr = heights.size();
        int nc = heights[0].size();
        
        vector<vector<bool>> pacific(nr , vector<bool>(nc,false));
        vector<vector<bool>> atlantic(nr , vector<bool>(nc,false));
        
        for(int i = 0;i<nr;i++){
            dfs(heights,pacific,i,0);
            dfs(heights,atlantic,i,nc-1);
        }
        
        for(int j=0;j<nc;j++){
            dfs(heights,pacific,0,j);
            dfs(heights,atlantic,nr-1,j);
        }
        
        vector<vector<int>>ans;
        
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                if(pacific[i][j] and atlantic[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};