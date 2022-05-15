class Solution {
public:
    
    void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>&image,int newColor,int m,int n,int old_color){
        if(i<0 or j<0 or i>=m or j>=n)return;
        if(vis[i][j] or image[i][j]!=old_color)return;
        vis[i][j] = 1;
        image[i][j] = newColor;
        dfs(i+1,j,vis,image,newColor,m,n,old_color); //move left
        dfs(i-1,j,vis,image,newColor,m,n,old_color); //move right
        dfs(i,j+1,vis,image,newColor,m,n,old_color); //move down
        dfs(i,j-1,vis,image,newColor,m,n,old_color); //move up
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int x = image.size();
        int y = image[0].size();
        vector<vector<int>>vis(x,vector<int>(y,0));
        int old_color = image[sr][sc];
        dfs(sr,sc,vis,image,newColor,x,y,old_color);
        return image;
    }
};