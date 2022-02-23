class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std:: sort(strs.begin(),strs.end());
        
        string first = strs.front();
        string last = strs.back();
        string ans;
        
        for(int i = 0;i<first.size();i++){
            if(first[i] != last[i]){
                break;
            }
            
            else{
                ans += first[i];
            }
        }
        return ans;
        
    }
};