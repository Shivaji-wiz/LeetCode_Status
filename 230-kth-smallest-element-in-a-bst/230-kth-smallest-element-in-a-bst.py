# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
            inorder_seq = []
            def inorder(node):
                if node is None:
                    return 0
                else:
                    inorder(node.left)
                    if len(inorder_seq) < k:
                        inorder_seq.append(node.val)
                    else:
                        return
                    inorder(node.right)
                
            inorder(root)
            return inorder_seq[-1]
        