class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size(), sz2 = nums2.size(), val, ans = 0, j = 0;
        for(int i=0;i<sz1;i++) {
            j = max(j, i);
            while(j < sz2 && nums2[j] >= nums1[i]) {
                ans = max(ans, j-i);
                j++;
            }
        }
        return ans;
    }
};