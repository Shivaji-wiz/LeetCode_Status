class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       long long sum = 0;
       long long b = 1;
       while(b<=arr.size()){
           for(long long it = 0;it<arr.size()-b+1;it++){
               sum += accumulate(arr.begin()+it,arr.begin()+b+it,0);
           }
           b += 2;
       } 
        return sum;
    }
};
