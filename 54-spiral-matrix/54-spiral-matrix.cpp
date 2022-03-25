class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int row = matrix.size();
        if(row==0)return res;
        int col = matrix[0].size();
        
        int left = 0, right = col-1, top = 0, bottom = row-1,d = 0;
        while(left<=right && top<=bottom){
            if(d==0){
                for(int i = left;i<=right;i++){
                    res.push_back(matrix[top][i]);
                }
                top++;
                d = 1;
            }
            else if(d==1){
                for(int i = top;i<=bottom;i++){
                    res.push_back(matrix[i][right]);
                }
                d = 2;
                right--;
                
            }
            else if(d==2){
                for(int i = right;i>=left;i--){
                    res.push_back(matrix[bottom][i]);
                }
                d = 3;
                bottom--;
            }
            else if(d==3){
                for(int i = bottom;i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                d = 0;
                left++;
            }
        }
        return res;
    }
};