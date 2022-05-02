class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0;
        int fast = 1;
        
        int n = nums.size();
        int count = 1;
        while(fast<n){
            if(nums[slow] == nums[fast]){
                if(count<2){
                    nums[slow+1] = nums[fast];
                    count++;
                    slow++;
                }
                 fast++;
            }
            
            else{
                nums[slow+1] = nums[fast];
                count = 1;
                slow++;
                fast++;
            }
        }
        return slow+1;
    }
};