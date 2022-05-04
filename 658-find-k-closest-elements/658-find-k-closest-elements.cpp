class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int j = 0;
        while(j < arr.size() and arr[j] < x) j++;
        int i = j - 1;
        vector<int> ans;

        while ((i >= 0 or j < arr.size()) and ans.size() < k)
        {
            if(i < 0)
            {
                ans.push_back(arr[j]);
                j++;
                continue;
            }
            if(j >= arr.size()){
                ans.push_back(arr[i]);
                i--;
                continue;
            }
            if (abs(x - arr[i]) > abs(x - arr[j]))
            {
                ans.push_back(arr[j]);
                j++;
            }
            else
            {
                ans.push_back(arr[i]);
                i--;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};