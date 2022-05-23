int x[] = {-1,0,1,0};   
int y[] = {0,1,0,-1};
class Solution {
public:

    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                }
            }
        }

        if(q.size()==n*m){
            return -1;
        }
        while(!q.empty()){
            ans++;
            int size=q.size();
            while(size--){
                auto[x1,y1]=q.front();
                q.pop();
                //check all four direction
                for(int i=0;i<4;i++){
                    int newx=x1+x[i];
                    int newy=y1+y[i];
                    
                    if(newx>=0&&newy>=0&&newx<n&&newy<m&&grid[newx][newy]==0){
                        q.push({newx,newy});
                        grid[newx][newy]=1;
                    }
                }
            }
        }
        return ans-1;
        
    }
};