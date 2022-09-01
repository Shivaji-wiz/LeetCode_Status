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
    
    void goodn(TreeNode* root,int max,int &res){
        if(root==NULL) return ;
        
        if(root->val >= max){
            res++;
            max = root->val;
        }
        goodn(root->left,max,res);
        goodn(root->right,max,res);
    }
    
    int goodNodes(TreeNode* root) {
        int res = 0;
        goodn(root,root->val,res);
        return res;
    }
};