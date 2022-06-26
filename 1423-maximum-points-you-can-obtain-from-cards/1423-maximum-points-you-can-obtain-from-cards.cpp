class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {
        int sum_of_kele = 0;
        for(int i=0;i<k;i++){
            sum_of_kele += cardpoints[i];
        }
        
        int maxsum = sum_of_kele;
        
        int i = 0;
        int j = cardpoints.size();
        
        while(i<k){
            sum_of_kele = sum_of_kele - cardpoints[k-i-1] + cardpoints[j-i-1];
            maxsum = max(maxsum,sum_of_kele);
            i++;
        }
        
        return maxsum;
    }
};