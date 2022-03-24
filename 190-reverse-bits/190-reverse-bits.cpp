class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int rev = 0;
        for(int i = 0;i<32;i++){
            rev<<=1;
            rev |= (n & 1);
            n>>=1;
        }
        return rev;
    }
};