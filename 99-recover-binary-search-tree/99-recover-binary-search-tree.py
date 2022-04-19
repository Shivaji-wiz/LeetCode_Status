# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def recoverTree(self, root):
        arr = []
        def inOrder(node):
            if node is None:
                return
            inOrder(node.left)
            arr.append(node)
            inOrder(node.right)
            return arr
        
        arr = inOrder(root)
        sorted_arr = sorted(arr, key=lambda x:x.val)
        
        for i in range(len(arr)):
            if arr[i]!=sorted_arr[i]:
                arr[i].val,sorted_arr[i].val = sorted_arr[i].val,arr[i].val
                return