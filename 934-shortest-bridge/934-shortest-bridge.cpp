class Solution {
public:
    
    void floodfill(vector<vector<int>>& grid,int i,int j,vector<pair<int,int>> &r){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j]==0){
            return;
        }
        
        grid[i][j]=0;
        r.push_back(make_pair(i,j));
        
        floodfill(grid,i+1,j,r);
        floodfill(grid,i-1,j,r);
        floodfill(grid,i,j+1,r);
        floodfill(grid,i,j-1,r);
        return;
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        vector<pair<int,int>>x;
        vector<pair<int,int>>y;
        int count=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    count++;
                    if(count==1){
                        floodfill(grid,i,j,x);
                    }
                    else if(count==2){
                        floodfill(grid,i,j,y);
                    }
                }
            }
        }
        
        int min_dist = INT_MAX;
        for(int i=0;i<x.size();i++){
            for(int j=0;j<y.size();j++){
                int dist = abs(x[i].first - y[j].first) + abs(x[i].second - y[j].second)-1;
                if(dist<min_dist){
                    min_dist = dist;
                }
            }
        }
        return min_dist;
    }
};