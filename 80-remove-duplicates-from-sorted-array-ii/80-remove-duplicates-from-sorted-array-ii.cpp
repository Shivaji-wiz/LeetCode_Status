class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0, ct = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            if(idx < 2 || nums[idx-2] != nums[i]){
                nums[idx++] = nums[i];
            }
        }
        
        return idx;        
    }
};