class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>last_index(26);
        for(int i = 0;i<s.length();i++){
            last_index[s[i] - 'a'] = i;
        }
        int i = 0;
        int j = 0;
        int start_of_part = 0;
        
        vector<int>res;
        for(int i = 0;i<s.length();i++){
            j = max(j,last_index[s[i]-'a']);
            if(i == j){
                res.push_back(i-start_of_part+1);
                start_of_part = i+1;
            }
        }
        return res;
    }
};