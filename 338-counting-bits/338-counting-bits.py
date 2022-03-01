class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>bi(n+1);
        bi[0]=0;
        for(int i = 0;i<=n;i++){
            bi[i] = bi[i/2]+i%2;
        }
        return bi;
    }
};