class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a;
        for(int i = 1;i<arr.size();i++){
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
                a = i;
            }
        }
        return a;
    }
};