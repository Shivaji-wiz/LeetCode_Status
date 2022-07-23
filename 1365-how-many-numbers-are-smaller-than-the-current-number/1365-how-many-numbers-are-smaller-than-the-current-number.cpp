class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        
        for(int i=0;i<nums.size();i++)        
        {
            int freq=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                {
                    freq++;
                }
            }
            result.push_back(freq);
        }
        return result;
    }
};