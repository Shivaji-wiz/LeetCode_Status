class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = INT_MAX;
        
        int low = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            int mid = (low+high) >> 1;
            
            if(nums[mid] < min){
                min = nums[mid];
            }
            
            if(nums[mid] < nums[high]){
                high = mid;
            }
            
            else{
                low = mid+1;
            }
        }
        return min;
    }
};