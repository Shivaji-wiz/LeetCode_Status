class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = nums.size();
        if(n==0)return 0;
        unordered_map<int,int>m;
        int i = 0;
        int count = 0;
        int curr_sum = 0;
        while(i<n){
            curr_sum += nums[i];
            
            if(curr_sum == k){
                count+=1;
            }
            if(m.find(curr_sum - k)!=m.end()){
                count += m[curr_sum - k];
            }
            m[curr_sum] += 1;
            i += 1;
        }
        return count;
    }
};