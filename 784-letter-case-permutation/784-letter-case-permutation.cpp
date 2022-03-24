class Solution {
public:
    
    vector<string>res;
    
    void letter_case(string &s,string curr,int index){
        if((int)curr.size()==(int)s.size()){
            res.push_back(curr);
            return;
        }
        
        if(s[index]>='0' and s[index]<='9'){
            letter_case(s,curr + s[index],index+1);
        }
        else{
            letter_case(s,curr + (char)(toupper(s[index])),index+1);
            letter_case(s,curr + (char)(tolower(s[index])),index+1);
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        int n = s.size();
        string curr = "";
        
        letter_case(s,curr,0);
        return res;
        
    }
};