class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m,n,ex,ey;
        
        vector<pair<int,int>> v = {{0,1},{1,0},{-1,0},{0,-1}};
        
        m = maze.size();
        n = maze[0].size();
        
        ex = entrance[0];
        ey = entrance[1];
        
        queue<pair<int,int>> q;
        q.push({ex,ey});
        int ans = 0;
        
        while(!q.empty()){
            ans++;
            int s = q.size();
            
            while(s--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                
                if(i==0 || j==0 || i==m-1 || j==n-1){
                    if(i!=ex || j!=ey){
                        return ans-1;
                    }
                }
                
                for(auto a: v){
                    int x = a.first + i;
                    int y = a.second + j;
                    
                    if(x>=0 && y>=0 && x<m && y<n && maze[x][y]=='.'){
                        q.push({x,y});
                        maze[x][y] = '+';
                    }
                }
            }
        }
        return -1;
    }
};