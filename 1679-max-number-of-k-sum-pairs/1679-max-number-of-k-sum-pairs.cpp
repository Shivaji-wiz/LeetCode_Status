class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res = 0;
        int left = 0;
        int right = nums.size()-1;
        
        while(left < right and nums[left] < k){
            if(nums[left] + nums[right] < k){
                left++;
            }
            
            else if(nums[left] + nums[right] > k){
                right--;
            }
            else{
                left++;
                right--;
                res++;
            }
        }
        return res;
    }
};