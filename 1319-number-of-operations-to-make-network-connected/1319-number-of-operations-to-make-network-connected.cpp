class Solution {
public:
    
    void DFS(unordered_map<int,vector<int>> &adj,int curr,vector<bool> &visited){
        visited[curr] = true;
        for(auto i: adj[curr]){
            if(!visited[i]){
                DFS(adj,i,visited);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& con) {
        vector<bool> visited(n,false);
        unordered_map<int,vector<int>>adj;
        
        //step 1: construct a adj_list 
        int edges = 0;
        for(int i = 0;i<con.size();++i){
            adj[con[i][0]].push_back(con[i][1]);
            adj[con[i][1]].push_back(con[i][0]);
            edges++;
        }
        
        //step 2: count number of components
        
        int comp = 0;
        for(int i = 0;i<n;++i){
            if(!visited[i]){
                comp++;
                DFS(adj,i,visited);
            }
        }
        
        //step 3: count number of edges
        
        if(edges < n-1)return -1;
        int red = edges - ((n-1) - (comp-1));
        
        if(red >= comp -1){
            return comp-1;
        }
        return -1;
    }
};