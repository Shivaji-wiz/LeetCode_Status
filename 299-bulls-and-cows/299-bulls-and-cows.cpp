class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cow = 0;
        
        vector<int>sec_freq(10,0);
        vector<int>gue_freq(10,0);
        
        for(int i = 0;i<secret.size();i++){
            if(secret[i] == guess[i]){
                bulls++;
            }
            
            else{
                sec_freq[secret[i]-'0']++;
                gue_freq[guess[i]-'0']++;
            }
        }
        
        for(int i = 0;i<10;i++){
            cow += min(sec_freq[i],gue_freq[i]);
        }
        
        return to_string(bulls) + "A" + to_string(cow) + "B";
    }
};