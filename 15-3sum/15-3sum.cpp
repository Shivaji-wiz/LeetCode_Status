class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>tri;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n<3){
            return {};
        }
        if(nums[0]>0){
            return {};
        }
        
        for(int i = 0;i<n;i++){
            if(nums[i]>0)break;
            int j = i+1,k = n-1,sum = 0;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                
            
            if (sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            
            else{
                tri.push_back({nums[i],nums[j],nums[k]});
                int lo = nums[j],hi = nums[k];
                while(j<k && lo == nums[j])j++;
                while(j<k && hi == nums[k])k--;
            }
        }
        }
        return tri;
    }
};