class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        int index;
        int val;
        while(1){
            val = 0;
            while(n){
                index = n%10;
                val += index*index;
                n = n/10;
            }
            if(val==1) return true;
            else if(s.find(val)!=s.end()) return false;
            
            s.insert(val);
            n = val;
        }
        return false;
    }
};