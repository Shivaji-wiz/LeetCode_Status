class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> ans(n,false);
        ans[n-1] = true;
        
        for(int i = n-2;i>=0;i--){
            if(i+nums[i]>=n-1){
                ans[i] = true;
            }
            else if(i+nums[i]<n){
                for(int j=i;j<=(i+nums[i]);j++){
                    if(ans[j]==true){
                       ans[i] = true;
                       break;   
                    }
                }
            }
        }
        return ans[0];
    }
};