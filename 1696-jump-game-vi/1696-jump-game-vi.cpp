class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        
        deque<int>de{0};
        for(int i = 1;i<nums.size();++i){
            if(de.front()+k < i){
                de.pop_front();
            }
            
            nums[i] += nums[de.front()];
            
            while(!de.empty() && nums[de.back()] <= nums[i]){
                de.pop_back();
            }
            
            de.push_back(i);
        }
        return nums.back();
    }
};