class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(),nums.end());

        int longest_streak  = 0;
        
        for(int num:nums){
            if(!st.count(num-1)){
                int CN = num;
                int CS = 1;
                
                while(st.count(CN+1)){
                    CN++;
                    CS++;
                }
                longest_streak = max(longest_streak,CS);
            }
        }
        return longest_streak;
    }
};