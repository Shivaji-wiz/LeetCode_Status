class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int>st;
        int c;
        for(int i = 0;i<nums.size();i++){
            int a = st.size();
            st.insert(nums[i]);
            int b = st.size();
            if(b == a){
              c =  nums[i];
                break;
            }
            a = b;
        }
        return c;
    }
};