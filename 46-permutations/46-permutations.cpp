class Solution {
public:
    
    void permutation(int index,vector<int> &nums,vector<vector<int>> &res){
        if(index == nums.size()){
            res.push_back(nums);
            return;
        }
        
        for(int i = index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            permutation(index+1,nums,res);
            swap(nums[index],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        permutation(0,nums,res);
        return res;
        
        
    }
};