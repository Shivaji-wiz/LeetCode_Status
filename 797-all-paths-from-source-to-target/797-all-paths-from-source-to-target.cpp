class Solution {
public:
    
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& res,vector<int>temp,int curr){
        temp.push_back(curr);
        if(curr == graph.size()-1){
            res.push_back(temp);
        }
        
        else{
            for(auto x: graph[curr]){
                dfs(graph,res,temp,x);
            }
        }
        
        temp.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        vector<int>temp;
        
        dfs(graph,res,temp,0);
        
        return res;
    }
};