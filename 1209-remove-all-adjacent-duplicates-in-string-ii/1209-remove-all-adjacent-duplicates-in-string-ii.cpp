class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,int>>st;
        
        for(auto it : s){
            if(st.size()==0 || st.back().first != it){
                st.push_back({it,1});
            }
            
            else{
                st.back().second++;
            }
            
            if(st.back().second == k){
                st.pop_back();
            }
        }
        
        string res = "";
        for(auto it : st){
            res.append(it.second, it.first);
        }
        return res;
    }
};