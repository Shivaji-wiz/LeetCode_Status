class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        
        vector<int> sorted=nums;
        int i=0,start=0; 
        int j=0, end=0;
        sort(sorted.begin(), sorted.end());
        for( i=0;i<nums.size();i++){
            if(nums[i]!=sorted[i])
            {
                start=i;
                break;
            }
        }
        for( j=0;j<nums.size();j++){
            if(nums[j]!=sorted[j])
            {
                end=j;
            }
        }
        if(end-start+1==1)
            return 0;
        return end-start+1;
        
        
    }
};