class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int mini = prices[0];
        int profit;
        int n = prices.size();
        for(int i = 0;i<n;i++){
            mini = min(mini,prices[i]);
            profit = prices[i] - mini;
            mx = max(mx,profit);
        }
       return mx; 
    }
};