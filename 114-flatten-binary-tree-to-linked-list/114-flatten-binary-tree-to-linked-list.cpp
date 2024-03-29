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
    void pre(TreeNode* root,TreeNode* &prev)
    {
        if(root==NULL)
            return;
        TreeNode* left = root->left; // store the values of left and right childs
        TreeNode* right = root->right;// as we are changing the links afterwards any may loose our original links
        if(prev == NULL) // if prev is NULL this means it is our head of the linked list
        {
            prev = root;
        }
        else // if not NULL then we need to make the required changes
        {
            prev->left = NULL;  // we make the left of prev as NULL
            prev->right = root; // and right of prev as current element
            prev = root; // Now make the current element as prev for further iterations
        }
        pre(left,prev); // simply do calls on left 
        pre(right,prev);// and right child 
    }
    void flatten(TreeNode* root) {
        TreeNode *prev = NULL; // prev stores the previous element in the preorder traversal
        pre(root,prev);
        
    }
};