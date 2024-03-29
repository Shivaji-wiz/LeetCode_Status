class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1 = -1;
        int n2 = -1;
        int c1 = 0;
        int c2 = 0;
        int s = nums.size();
        
        for(int i = 0;i<s;i++){
            if(nums[i] == n1) c1++;
            
            else if(nums[i] == n2) c2++;
            
            else if(c1 == 0){
                n1 = nums[i];
                c1 = 1;
            }
            
            else if(c2 == 0){
                n2 = nums[i];
                c2 = 1;
            }
            else{
                c1--;
                c2--;
            }
        }
        
        vector<int>ans;
        c1 = c2 = 0;
        for(int i = 0;i<s;i++){
            if(nums[i] == n1) c1++;
            else if(nums[i] == n2) c2++;
        }
        
        if(c1 > s/3) ans.push_back(n1);
        if(c2 > s/3) ans.push_back(n2);
        
        return ans;
    }
};