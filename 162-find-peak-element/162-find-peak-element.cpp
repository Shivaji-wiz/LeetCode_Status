class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        
        while(low<high){
            mid = (low+high) >> 1;
            
            if(nums[mid] <= nums[mid+1]){
                low = mid+1;
            }
            
            else{
                high = mid;
            }
        }
        return low;
    }
};