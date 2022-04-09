class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>mp;
        vector<int>res;
        
        int freq = 1;
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                freq++;
            }
            
            else{
                mp.push_back({freq,nums[i]});
                freq = 1;
            }
        }
        mp.push_back({freq,nums[n]});
        
        sort(mp.rbegin(),mp.rend());
        
        for(int i = 0;i<k;i++){
            res.push_back(mp[i].second);
        }
        return res;
    }
};