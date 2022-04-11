class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        
        int n = digits.length();
        int index = 0;
        vector<string> ans;
        recur(mp,"",index,n,ans,digits);
        return ans;
    }
    
    void recur(map<char,string> &mp,string temp,int index,int n,vector<string> &ans,string digits){
        if(temp.length()==n){
            ans.push_back(temp);
            return;
        }
        
        string k = mp[digits[index]];
        for(int i = 0;i<k.length();i++){
            temp.push_back(k[i]);
            recur(mp,temp,index+1,n,ans,digits);
            temp.pop_back();
        }
    }
};