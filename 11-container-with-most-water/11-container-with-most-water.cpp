class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ans=0;    
        while(l<r)
        {
            int w=r-l;//find width
            int h=min(nums[l],nums[r]); //find min height 
            int area=w*h; //find area widht*height
            ans=max(ans,area);//checking existing max value with current answer.
            if(nums[l]<nums[r])l++;
            else
                 r--;
        }
        
       return ans;
        
    }
};