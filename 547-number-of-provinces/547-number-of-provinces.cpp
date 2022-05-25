class Solution {
public:
    
    void dfs(vector<vector<int>>& isConnected, vector<bool> &visited, int r){
        visited[r] = 1;
        
        for(int i=0;i<isConnected[r].size();i++){
            if(isConnected[r][i]==1 && !visited[i]){
                dfs(isConnected,visited,i);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int res = 0;
        int n = isConnected.size();
        
        vector<bool> visited(n,false);
        
        for(int i = 0;i<n;i++){
            if(!visited[i]){
                res++;
                dfs(isConnected,visited,i);
            }
        }
        return res;
    }
};