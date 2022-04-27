class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row = grid.size()-1;
        int col = grid[0].size();
        int j = 0;
        int ans = 0;
        
        while(row >= 0){
            while (col > j){
                if(grid[row][j] < 0){
                    ans += col - j;
                    break;
                }
                j++;
            }
            row--;
        }
        return ans;
    }
};