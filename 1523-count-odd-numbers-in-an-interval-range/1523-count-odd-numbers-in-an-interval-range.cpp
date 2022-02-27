class Solution {
public:
    int countOdds(int low, int high) {
        int k = (high-low)/2;
            if(low%2!=0 || high%2!=0){
                k = k+1;
            }
        return k;
    }
};