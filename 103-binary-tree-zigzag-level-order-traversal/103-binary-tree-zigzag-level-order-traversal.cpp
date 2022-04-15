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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        
        if(root == NULL){ 
            return res;
        }
        
        queue<TreeNode*>myqueue;
        myqueue.push(root);
        bool dir = true;
        
        while(!myqueue.empty()){
            int size = myqueue.size();
            vector<int> temp(size);
            
            for(int i = 0; i<size ; i++){
                TreeNode *node = myqueue.front();
                myqueue.pop();
                
                int index = (dir) ? i:(size-1-i);
                
                temp[index] = node->val;
                
                if(node->left){
                    myqueue.push(node->left);
                }
                
                if(node->right){
                    myqueue.push(node->right);
                }
            }
            
            dir = !dir;
            res.push_back(temp);
        }
        return res;
    }
};