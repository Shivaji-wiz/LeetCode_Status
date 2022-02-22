class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxim = INT_MIN;
        for(auto it:nums){
            sum += it;
            maxim = max(sum,maxim);
        
        if(sum<0){
            sum = 0;
        }
        }
        return maxim;
    }
};