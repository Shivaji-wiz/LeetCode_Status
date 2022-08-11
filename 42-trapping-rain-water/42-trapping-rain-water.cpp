class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int res = 0;
        int left = 0;
        int right = n-1;
        int lmx = 0;
        int rmx = 0;
        
        while(left<=right){
            if(h[left] <= h[right]){
                if(h[left]>lmx) lmx = h[left];
                else res += lmx - h[left];
                left++;
            }
            else{
                if(h[right] > rmx) rmx = h[right];
                else res += rmx - h[right];
                right--;
            }
        }
        return res;
    }
};