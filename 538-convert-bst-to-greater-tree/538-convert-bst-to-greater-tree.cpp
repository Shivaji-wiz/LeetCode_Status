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
    
    int sum=0;
    int prevSum=0;
    
    void findSum(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        sum+=root->val;
        findSum(root->left);
        findSum(root->right);
        
    }
    
    void modify(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        modify(root->left);
        int k=root->val;
        root->val=sum-prevSum;
        prevSum+=k;
        modify(root->right);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        
        findSum(root);
        modify(root);
        return root;
    }
};