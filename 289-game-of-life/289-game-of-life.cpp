class Solution {
public:
    
    int CountAliveNeighbor(vector<vector<int>> &board,int i,int j){
        int n = board.size();
        int m = board[0].size();
        
        int cnt = 0;
        
        if(i-1 > -1 && j-1 > -1 && (board[i-1][j-1]==1 || board[i-1][j-1]==-1)){
            cnt++;
        }
        if(i-1 > -1 && (board[i-1][j]==1 || board[i-1][j]==-1)){
            cnt++;
        }
        if(j-1 > -1 && (board[i][j-1]==1 || board[i][j-1]==-1)){
            cnt++;
        }
        if(i+1 < n && j+1 < m && (board[i+1][j+1]==1 || board[i+1][j+1]==-1)){
            cnt++;
        }
        if(i+1 < n && (board[i+1][j]==1 || board[i+1][j]==-1)){
            cnt++;
        }
        if(j+1 < m && (board[i][j+1]==1 || board[i][j+1]==-1)){
            cnt++;
        }
        if(i-1 > -1 && j+1 < m  && (board[i-1][j+1]==1 || board[i-1][j+1]==-1)){
            cnt++;
        }
        if(i+1 < n && j-1 > -1 && (board[i+1][j-1]==1 || board[i+1][j-1]==-1)){
            cnt++;
        }
        return cnt;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                int count = CountAliveNeighbor(board,i,j);
                
                if(board[i][j]==1){
                    
                    if(count<2 || count>3){
                        board[i][j]=-1;
                    }
                    
                }
                else{
                    
                    if(count==3){
                        board[i][j]=-2;
                    }
                    
                }
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(board[i][j]==-1){
                    board[i][j]=0;
                }
                else if(board[i][j]==-2){
                    board[i][j]=1;
                }
            }
        }
    }
};