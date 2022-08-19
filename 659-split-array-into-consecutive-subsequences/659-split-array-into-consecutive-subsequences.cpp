class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>avail,poss;
        
        for(int i=0;i<nums.size();i++){
            avail[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(avail[nums[i]] == 0) continue;
            
            else if(poss[nums[i]] > 0){
                poss[nums[i]+1]++;
                poss[nums[i]]--;
            }
            else if(avail[nums[i]+1]>0 and avail[nums[i]+2]>0){
                poss[nums[i]+3]++;
                avail[nums[i]+1]--;
                avail[nums[i]+2]--;
            }
            else{
                return false;
            }
            avail[nums[i]]--;
        }
        return true;
    }
};