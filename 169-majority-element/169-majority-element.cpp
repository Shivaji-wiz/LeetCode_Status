class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m_e = nums[0];
        int count = 1;
        for(int i = 1;i<n;i++){
            if(nums[i]==m_e){
                count++;
            }
            else{
                count--;
            }
            
            if(count == 0){
                m_e = nums[i];
                count = 1;
            }
        }
        return m_e;
    }
};