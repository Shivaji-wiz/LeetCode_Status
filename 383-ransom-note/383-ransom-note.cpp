class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> umap;
        
        for(int i = 0; ransomNote[i]; i++) umap[ransomNote[i]]++;
        for(int i = 0; magazine[i]; i++) umap[magazine[i]]--;
        for(int i = 0; ransomNote[i]; i++){
            if(umap[ransomNote[i]] > 0) return false;
        }
        return true;   
    }
};