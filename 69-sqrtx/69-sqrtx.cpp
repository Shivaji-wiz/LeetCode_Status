class Solution {
public:
    int mySqrt(int x) {
        int low = 0,high = x;
        long long int mid = (low+high) >> 1;
        long long int ans;
        
        while(low<=high){
            if(mid*mid == x){
                ans = mid;
                break;
            }
            
            if(mid*mid < x){
                low = mid+1;
            }
            
            else{
                high = mid-1;
            }
            
            mid = (low+high) >> 1;
        }
        
        return ans;
    }
};