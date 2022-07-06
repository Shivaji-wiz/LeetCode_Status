class Solution {
public:
    int fib(int n) {
        if (n<=1)return n;
        int sum = 0;
        int dp1 = 0;
        int dp2 = 1;
        for(int i = 2;i<=n;i++){
            sum = dp1 + dp2;
            dp1 = dp2;
            dp2 = sum;
        }
        return sum;
    }
};