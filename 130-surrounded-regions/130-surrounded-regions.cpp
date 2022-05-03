class Solution {
public:
    int row,col;
    
    void dfs(vector<vector<char>> &board,int i,int j){
        if(i < 0 || i >= row || j < 0 || j >= col || board[i][j] == 'X' || board[i][j] == '#'){
            return;
        }
        
        board[i][j] = '#';
        
        dfs(board,i+1,j);
        dfs(board,i-1,j);
        dfs(board,i,j+1);
        dfs(board,i,j-1);
    }
    
    void solve(vector<vector<char>>& board) {
        if(board.size()==0)return;
        
        row = board.size();
        col = board[0].size();
        
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if((i == 0 || i == row-1 || j == 0 || j == col-1) && board[i][j] == 'O'){
                    dfs(board,i,j);
                }
            }
        }
        
        for(int i = 0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                else if(board[i][j] == '#'){
                    board[i][j] = 'O';
                }
            }
        }
        return;
    }
};