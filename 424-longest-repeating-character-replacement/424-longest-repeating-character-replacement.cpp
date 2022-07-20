class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        int n = s.size();
        for(char ch = 'A';ch<='Z';ch++)
        {
            int start = 0,end = 0,other = 0;
            while(end<n)
            {
                if(s[end]!=ch)
                    other++;
                while(other>k)
                {
                    if(s[start]!=ch)other--;
                    start++;
                }
                ans = max(ans,end-start+1);
                end++;
            }
        }
        return ans;
    }
};