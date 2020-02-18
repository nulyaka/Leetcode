class Solution {
public:
    int maxArea(vector<int>& height) {
        
        // O(n)
        
        int maxArea(INT_MIN);
        int size = static_cast<int>(height.size());
        
        int left(0), right(size - 1);
        
        int tempArea;
        
        while (left != right) {
            
            if(height.at(left) < height.at(right)) {
                
                tempArea = height.at(left) * (right - left);
                left++;
            }
            else {
                
                tempArea = height.at(right) * (right - left);
                right--;
            }
            
            if (maxArea < tempArea) maxArea = tempArea;
        }
        
        return maxArea;
    }
};
