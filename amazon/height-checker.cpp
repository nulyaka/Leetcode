class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> newHeights(heights);
        sort(newHeights.begin(), newHeights.end());
        
        int minMoves = 0;
        
        for (int i = 0; i < (int)heights.size(); ++i) {
            
            if (heights.at(i) != newHeights.at(i)) minMoves++;
        }
        
        return minMoves;
    }
};
