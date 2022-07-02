class Solution {
public:
    
    unordered_map<int,vector<int>>mp;
    int ans = 0;
    int mx = 0;
    
    void dfs(int manager,vector<int> &informTime){
        mx = max(mx,ans);
        
        for(auto emp: mp[manager]){
            ans += informTime[manager];
            dfs(emp,informTime);
            ans -= informTime[manager];
        }
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        for(int i = 0;i<n;i++){
            int val = manager[i];
            if(val!=-1){
                mp[val].push_back(i);
            }
        }
        
        dfs(headID,informTime);
        return mx;
    }
};