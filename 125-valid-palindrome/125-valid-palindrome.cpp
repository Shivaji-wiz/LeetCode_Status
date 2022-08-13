class Solution {
public:
    
    bool isvalid(char c){
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')) return true;
        return false;
    }
    
    char lower(char c){
        if(c>='A' && c<='Z') return c+32;
        return c;
    }
    
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        
        while(i<=j){
            if(!isvalid(s[i])){
                i++;
                continue;
            }
            
            if(!isvalid(s[j])){
                j--;
                continue;
            }
            
            if(lower(s[i]) != lower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};