class Solution {
public:
    
    int memo[51][51][51];
    int mod = 1e9 + 7;
    
    int findBoundries(int m,int n,int maxMove ,int i,int j){
        
        if(i < 0 || i >= m || j < 0 || j >= n){
            return 1;
        }
        
        if(maxMove <= 0){
            return 0;
        }
        
        if(memo[i][j][maxMove]!=-1){
            return memo[i][j][maxMove];
        }
        
        long int res = 0;
        
        res += findBoundries(m,n,maxMove - 1 , i+1, j);
        res += findBoundries(m,n,maxMove - 1 , i-1, j);
        res += findBoundries(m,n,maxMove - 1 , i, j+1);
        res += findBoundries(m,n,maxMove - 1 , i, j-1);
        
        return  memo[i][j][maxMove] = res % mod;
    }
    
    
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(memo,-1,sizeof(memo));
        
        return findBoundries(m,n,maxMove,startRow,startColumn) % mod;
    }
};