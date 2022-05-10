class Solution {
public:
    
    void backtrack(int k,int n,vector<vector<int>> &res, vector<int> &temp){
        if(temp.size()==k && n==0){
            res.push_back(temp);
            return;
        }
        
        for(int i = temp.empty() ?1:temp.back()+1;i<=9;i++){
            temp.push_back(i);
            backtrack(k,n-i,res,temp);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>temp;
        
        backtrack(k,n,res,temp);
        return res;
    }
};