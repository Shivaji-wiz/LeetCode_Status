class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        int ans = 0,count=0;
        int last_diff = nums[1]-nums[0];
        
        for(int i = 1;i<n-1;i++){
            int curr_diff = nums[i+1] - nums[i];
            if(last_diff == curr_diff){
                count++;
            }
            else{
                last_diff = curr_diff;
                count = 0;
            }
            ans += count;
        }
        return ans;
    }
};