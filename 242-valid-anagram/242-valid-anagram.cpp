class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        
        unordered_map<char,int>mymap;
        
        for(auto i:s)mymap[i]++;
        for(auto i:t)mymap[i]--;
        
        for(auto i:mymap)if(i.second!=0)return false;
        return true;
    }
};