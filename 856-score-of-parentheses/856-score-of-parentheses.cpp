class Solution {
public:
    int scoreOfParentheses(string s) {
        int count = 0;
        stack<int>st;
        for(int i = 0;i<s.length();i++){
            int val = 0;
            if(s[i]=='('){
                st.push(0);
            }
            else{
                while(st.top()!=0){
                    val += st.top();
                        st.pop();
                }
                val = max(2*val,1);
                st.pop();
                st.push(val);
            }
        }
        while(!st.empty()){
            count += st.top();
            st.pop();
        }
        return count;
    }
};