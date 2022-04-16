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
    vector<TreeNode*>in;
    
    void inorder(TreeNode *root){
        if(!root) return ;
        
        if(root->right){
            inorder(root->right);
        }
        
        in.push_back(root);
        
        if(root->left){
            inorder(root->left);
        }
    }
    TreeNode* convertBST(TreeNode* root) {
        inorder(root);
        
        for(auto i:in){
            i->val += sum;
            sum = i->val;
        }
        return root;
    }
};