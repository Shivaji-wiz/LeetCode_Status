/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>>res;
    vector<int>temp;
    
    void dfs(TreeNode *root,int sum){
        if(!root)return ;
        
        temp.push_back(root->val);
        
        sum = sum - root->val;
        
        if(!root->left and !root->right and sum == 0){
            res.push_back(temp);
        }
        
        dfs(root->left,sum);
        dfs(root->right,sum);
        
        temp.pop_back();
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        dfs(root,sum);
        
        return res;
    }
};