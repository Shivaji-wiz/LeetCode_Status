class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        if(n<1)return res;
        int prod = 1;
        for(int i = 0;i<n;++i){
            prod *= nums[i];
            res.push_back(prod);
        }
        prod = 1;
        for(int i = n-1;i>0;--i){
            res[i] = res[i-1]*prod;
            prod *= nums[i];
        }
        res[0] = prod;
        return res;
    }
};