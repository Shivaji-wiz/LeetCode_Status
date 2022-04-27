class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        int count = 0;
        for (auto& n : arr1) {
            if (lower_bound(arr2.begin(), arr2.end(), n-d) == upper_bound(arr2.begin(), arr2.end(), n+d)) {
                count++;
            }
        }
        return count;
    }
};