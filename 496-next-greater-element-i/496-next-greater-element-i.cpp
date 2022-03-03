class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        unordered_map<int, int> m;
        stack<int> st;
        vector<int> ans;
        for (int i = n2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() < n2[i])
                st.pop();
            if (st.empty())
                m[n2[i]] = -1;
            else
                m[n2[i]] = st.top();
            st.push(n2[i]);
        }
        for (auto x : n1)
            ans.push_back(m[x]);

        return ans;
    }
};


