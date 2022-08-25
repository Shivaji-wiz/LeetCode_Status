class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> rp, mp;
        for(int i = 0; i<magazine.size(); ++i)  mp[magazine[i]]++;
        for(int i = 0; i<ransomNote.size(); ++i){
            rp[ransomNote[i]]++;
            if(rp[ransomNote[i]] > mp[ransomNote[i]]) return false;
        }
        return true;        
    }
};