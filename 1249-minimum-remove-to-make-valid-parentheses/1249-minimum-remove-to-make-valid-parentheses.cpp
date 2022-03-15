class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        
        for(int i = 0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            if(s[i]==')'){
                if(st.size()>=1){
                    st.pop();
                }
                else{
                    s[i]='*';
                }
            }
        }
        
        while(!st.empty()){
            s[st.top()]='*';
            st.pop();
        }
        
        string str = "";
        for(auto it:s){
            if(it != '*'){
                str += it;
            }
        }
       return str; 
    }
};