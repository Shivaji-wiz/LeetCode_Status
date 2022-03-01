bool fu(int x,int y){
    return x>y;
}
class Solution {
public:
    int a,b,c;
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),fu);
        for(int i = 2;i<nums.size();i++){
            a = nums[i-2];
            b = nums[i-1];
            c = nums[i];
            if (b+c>a){
                return a+b+c;
            }
        }
        return 0;
    }
};