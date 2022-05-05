class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)return -1;
        
        if(n==1)return 1;
        
        queue<pair<int,int>>q;
        
        int dir[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        
        int dist = 0;
        
        q.push({0,0});
        
        grid[0][0] = 1;
        
        while(!q.empty()){
            
            int size = q.size();
            
            dist++;
            
            while(size--){
                
                auto front = q.front();
                
                q.pop();
                
                for(auto d:dir){
                    int adjI = front.first + d[0];
                    int adjJ = front.second + d[1];
                    
                    if(adjI<0 || adjJ<0 || adjI>=n || adjJ>=n) continue;
                    
                    if(grid[adjI][adjJ] == 1)continue;
                    
                    grid[adjI][adjJ] = 1;
                    
 				    if(adjI==n-1 && adjJ==n-1) return dist+1;                   
				    q.push({adjI,adjJ});                   
                }
            }
        }
        return -1;
    }
};