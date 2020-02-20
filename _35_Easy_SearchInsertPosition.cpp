class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // min O(1), max O(n)
        
        int size = static_cast<int>(nums.size());
        
        for (int i(0); i < nums.size(); ++i) {
            
            if (target <= nums.at(i)) return i;
        }
        
        return size;
    }
};
