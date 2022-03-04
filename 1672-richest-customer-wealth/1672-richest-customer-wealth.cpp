class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = INT_MIN;
        int sum = 0;
        for(int i = 0;i<accounts.size();i++){
            for(int j=0;j<accounts[0].size();j++){
                sum += accounts[i][j];
            }
            mx = max(mx,sum);
            sum = 0;
        }
        return mx;
    }
};