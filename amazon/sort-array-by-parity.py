class Solution:
    def sortArrayByParity(self, A: List[int]) -> List[int]:
        
        # two pointers solution
        
        left = 0
        right = len(A) - 1
        
        while left < right:
    
            # True and True (e.g. 1 and 1)
            if A[left] % 2 and A[right] % 2: 
                right -= 1
                
            # False and False (e.g. 2 and 2)
            elif not A[left] % 2 and not A[right] % 2: 
                left += 1
                
            # True and False (e.g. 1 and 2 -> swap)
            elif A[left]%2 and not A[right]%2:
                A[left], A[right] = A[right], A[left]
                
            # False and True (e.g. 2 and 1 -> do nothing)
            else:
                left += 1
                right -= 1
                
        return A
            
                
                
                
