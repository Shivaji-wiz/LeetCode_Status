class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        
        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            if(nums[low]%2!=0 and nums[high]%2==0){
                swap(nums[low],nums[high]);
                low++;
                high--;
            }
            else if(nums[high]%2!=0){
                high--;
            }
            else{
                low++;
            }
        }
        return nums;
    }
};