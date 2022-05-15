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
    int maxdepth = 0;
    

    
    void findsum(TreeNode *root,int curr_depth){
        if(root!=NULL){
            if(curr_depth > maxdepth){
                sum = 0;
                maxdepth = curr_depth;
            }
            if(curr_depth == maxdepth){
                sum += root->val;
            }
            
            findsum(root->left,curr_depth+1);
            findsum(root->right,curr_depth+1);
        }
    }
    
    int deepestLeavesSum(TreeNode* root) {
        findsum(root,1);
        return sum;
    }
};