class Solution {
public:    
    int lengthOfLIS(vector<int>& nums) {
        vector<int>temp;
        temp.push_back(nums[0]); // Start with 1st element
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > temp.back()){
                temp.push_back(nums[i]);
            }else{
                int x = nums[i];
                int ind = lower_bound(temp.begin(), temp.end(), x) - temp.begin();
                temp[ind] = nums[i];
            }
        }
        return temp.size();
    }
};