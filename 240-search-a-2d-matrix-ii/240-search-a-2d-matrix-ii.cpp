class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m = matrix.size(), n = matrix[0].size(), i = 0, j = n-1;
    while(i < m && i>=0 && j<n && j >= 0) {
        if(matrix[i][j] < target)
            i++;
        else if(matrix[i][j] > target)
            j--;
        else
            return true;
    }
    
    return false;       
    }
};