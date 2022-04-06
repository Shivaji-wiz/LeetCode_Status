class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>v;
        unordered_map<string,int>m;
        
        int n = s.length();
        if(n<10) return v;
        
        for(int i = 0;i<n-9;i++){
            string s1 = s.substr(i,10);
            
            m[s1]++;
            if(m[s1]==2){
                v.push_back(s1);
            }
        }
        return v;
    }
};