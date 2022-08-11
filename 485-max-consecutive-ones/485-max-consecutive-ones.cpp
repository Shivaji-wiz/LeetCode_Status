class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = INT_MIN;
        for(auto el: nums){
            if(el == 1){
                count++;
                ans = max(ans, count);
            }
            else{
                count = 0;
            }
        }
        return ans == INT_MIN ? 0 : ans;        
    }
};