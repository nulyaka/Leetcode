class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        
        left = 0
        right = len(A) - 1
        pos = len(A) - 1
        
        # empty list
        res = [None] * len(A)
        
        # add elements in decreasing order
        # starting from largest to smallest
        while left <= right:
            
            x = A[left]**2
            y = A[right]**2
            
            if x >= y:
                res[pos] = x
                left += 1
            else:
                res[pos] = y
                right -= 1
                
            pos -= 1
            
        return res
