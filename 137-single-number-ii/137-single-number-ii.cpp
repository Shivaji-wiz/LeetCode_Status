class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans = 0;
        
        for(int it: nums){
            m[it]++;
        }
        
        for(auto n: m){
            if(n.second == 1){
                ans = n.first;
                break;
            }
        }
        return ans;
    }
};
