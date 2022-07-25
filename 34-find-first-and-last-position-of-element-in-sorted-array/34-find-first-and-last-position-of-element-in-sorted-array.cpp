class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        auto fun = equal_range(nums.begin(),nums.end(),target);
        if(fun.first==fun.second){
            return v;
        }
            v[0]=fun.first-nums.begin();
            v[1]=fun.second-1-nums.begin();
            return v;
    }
};