class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int points = 0;
        sort(tokens.begin(),tokens.end());
        int l = 0;
        int h = tokens.size()-1;
        int ans = 0;
        
        while(l<=h && (power>=tokens[l] || points>0)){
            while(l<=h and power>=tokens[l]){
                power -= tokens[l++];
                points++;
            }
            
            ans = max(ans,points);
            
            if(l<=h and points>0){
                power += tokens[h--];
                points--;
            }
        }
    return ans;
    }
};