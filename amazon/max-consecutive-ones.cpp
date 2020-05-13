class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxLength = 0;
        int length = 0;
        
        for (int num: nums) {
            
            if (num == 0) {
                
                maxLength = max(length, maxLength);
                length = 0;
                continue;
            }
            
            length++;
        }
            
        return length > maxLength ? length : maxLength;
    }
};
