# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isCousins(self, root: TreeNode, x: int, y: int) -> bool:
        
        self.x_height = -1
        self.y_height = -2
        
        self.x_parent = None
        self.y_parent = None
        
        def dfs(root, parent, height, x, y):
            
            if root is None: return
            
            if root.val == x:
                self.x_parent = parent
                self.x_height = height
            elif root.val == y:
                self.y_parent = parent
                self.y_height = height
            else:
                dfs(root.left, root, height + 1, x, y)
                dfs(root.right, root, height + 1, x, y)
                
        
        dfs(root, None, 0, x, y)
        
        return self.x_height == self.y_height and self.x_parent != self.y_parent
            
