class Solution {
public:
    int fillCups(vector<int>& a) {
        
        sort(a.begin(),a.end());
        
        int sum = 0;
        
        int cold = a[0];
        int warm = a[1];
        int hot = a[2];
        
        sum = cold + warm + hot;
        
        if(cold + warm > hot) return sum/2+sum%2;
        
        if(cold == 0 && warm == 0)return hot;
        return hot;
    }
};