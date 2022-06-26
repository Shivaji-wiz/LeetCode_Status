class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(count!=-1) return false;
            count=i;
            }
        }
        
       
        return count==-1 || count==0 || count==nums.size()-2 || nums[count-1]<=nums[count+1]|| nums[count]<=nums[count+2] ;
    }
};