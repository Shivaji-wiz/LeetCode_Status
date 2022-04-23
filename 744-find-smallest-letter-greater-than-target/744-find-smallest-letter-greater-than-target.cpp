class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size()-1;
        long long int mid = (low+high) >> 1;
        char res;
        while(low<=high){
            if(int(letters[mid]) > int(target)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            mid = (low+high) >> 1;
        }
        return (low == letters.size()) ? letters[0]:letters[low];
    }
};