class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n= nums.size();
        int ans=0;
        int l=0;
        int r=0;
        map<int,int>mp;
        int sum=0;
        while(r<n)
        {
            mp[nums[r]]++;
            
            if(mp[nums[r]]>1)
            {
                ans= max(ans,sum);
                
                
            }
            while(mp[nums[r]]>1)
            {
                mp[nums[l]]--;
                sum-= nums[l++];
            }
            sum+=nums[r];
            r++;
        }
        ans=max(sum, ans);
        return ans;
    }
};