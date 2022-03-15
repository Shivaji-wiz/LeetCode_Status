class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>pas(n+1);
        pas[0] = pas[n] = 1;
        long long res = 1;
        for(int i = 0 ;i<n;i++){
            res *= (n-i);
            res /= (i+1);
            pas[i+1] = res;
        }
        return pas;
    }
};