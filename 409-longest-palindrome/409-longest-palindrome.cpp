class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        for(int i = 0;i<s.length();i++){
            m[s[i]]+=1;
        }
        
        bool flag = 0;
        int count = 0;
        for(auto it:m){
            if(it.second % 2 == 0){
                count+=it.second;
            }
            else{
                count += it.second - 1;
                flag = 1;
                
            }
        }
        if(flag == 1)return count+1;
        return count;
    }
};