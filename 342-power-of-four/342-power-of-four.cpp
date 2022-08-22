class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1)
            return true;
        while(true){
            if((n&3) !=0)
                return false;
            if((n^4) == 0)
                return true;
            if(n<4)
                return false;
            n = n>>2;
        }
    }
};