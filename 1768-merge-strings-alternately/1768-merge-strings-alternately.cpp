class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0, len1=word1.length(), len2=word2.length();
        string ans="";
        while(i<len1 || j<len2){
            if(i<len1)
                ans.push_back(word1[i++]);
            if(j<len2)
                ans.push_back(word2[j++]);
        }
        return ans;
        
    }
};