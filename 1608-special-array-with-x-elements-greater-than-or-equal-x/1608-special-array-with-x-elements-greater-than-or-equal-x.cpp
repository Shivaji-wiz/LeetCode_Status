class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(),nums.end());
        
        for(int i = 0;i <= mx;i++){
            int l = 0,r = nums.size()-1,pos = 0;
            
            while(l<=r){
                int mid = l + (r-l)/2;
                if(nums[mid] >= i){
                    pos = mid;
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            if(nums.size() - pos == i){
                return i;
            }
        }
        return -1;
    }
};