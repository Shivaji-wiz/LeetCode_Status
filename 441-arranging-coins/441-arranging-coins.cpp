class Solution {
public:
    int arrangeCoins(int n) {
        long long a = n;
        long long y = sqrt(1+8*a)-1;
        return y/2;
    }
};