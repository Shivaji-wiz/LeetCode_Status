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
    int sum = 0;
    
    int maxdepth(TreeNode *root){
        if(root == NULL)return 0;
        
        return  1 + max(maxdepth(root->left),maxdepth(root->right));
    }
    
    void findsum(TreeNode *root,int curr_depth,int maxdepth){
        if(root!=NULL){
            if(curr_depth == maxdepth){
                sum += root->val;
            }
            
            findsum(root->left,curr_depth+1,maxdepth);
            findsum(root->right,curr_depth+1,maxdepth);
        }
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int mxdepth = maxdepth(root);
        findsum(root,1,mxdepth);
        return sum;
    }
};