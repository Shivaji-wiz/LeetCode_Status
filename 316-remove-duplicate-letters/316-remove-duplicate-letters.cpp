class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans;
        int n = s.length();
        vector<int>last(26),vis(26);
        for(int i = 0;i<n;i++){
            last[s[i]-'a'] = i;
        }
        for(int i = 0;i<n;i++){
            if(vis[s[i]-'a']){
                continue;
            }
            vis[s[i]-'a'] = true;
            while(!ans.empty() && s[i]<ans.back() && last[ans.back()-'a']>i){
                vis[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};