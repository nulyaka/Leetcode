class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        
        # comparing original list with sorted copy
        heights_sorted = sorted(heights)
        
        # count
        students_to_move = 0
        
        for pos in range(len(heights)):
            if heights[pos] != heights_sorted[pos]:
                students_to_move += 1
                
        return students_to_move
