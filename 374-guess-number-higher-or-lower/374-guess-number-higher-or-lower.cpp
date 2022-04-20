/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(n==1)return 1;
        
        long long low = 1;
        long long high = n;
        
        while(low<=high){
            long long mid = (low+high) >> 1;
            
            long long pick = guess(mid);
            
            if(pick == 0)return mid;
            
            if(pick == -1){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return 0;
    }
};