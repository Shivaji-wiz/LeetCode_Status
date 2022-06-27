class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = 1e6;
        int op = 0;
        int tp = 0;
        
        for(int i=0;i<prices.size();i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            
            tp = prices[i]-lsf;
            if(op<tp){
                op = tp;
            }
        }
        return op;
    }
};