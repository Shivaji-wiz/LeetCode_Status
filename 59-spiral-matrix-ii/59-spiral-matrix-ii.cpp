class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n));
        int row = n;
        if(row==0)return res;
        int col = n;
        int t = n*n;
        int count = 1;
        
        int left = 0, right = col-1, top = 0, bottom = row-1,d = 0;
        while(left<=right && top<=bottom){
            if(d==0){
                for(int i = left;i<=right;i++){
                    res[top][i] = count;
                    count ++;
                }
                top++;
                d = 1;
            }
            else if(d==1){
                for(int i = top;i<=bottom;i++){
                    res[i][right] = count;
                    count++;
                }
                d = 2;
                right--;
                
            }
            else if(d==2){
                for(int i = right;i>=left;i--){
                    res[bottom][i]=count;
                    count++;
                }
                d = 3;
                bottom--;
            }
            else if(d==3){
                for(int i = bottom;i>=top;i--){
                    res[i][left]=count;
                    count++;
                }
                d = 0;
                left++;
            }
        }
        return res;
    }
};