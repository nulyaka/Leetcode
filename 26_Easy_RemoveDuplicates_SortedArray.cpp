class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // O(n)
        
        if (!nums.size()) return 0;
        
        int length (1);
        int curr = nums.at(0);
        
        for (int i(1); i < nums.size(); ++i) {
            
            if (curr != nums.at(i)) {
                curr = nums.at(i);
                nums.at(length) = nums.at(i);
                length++;
            }
        }
        
        return length;
    }
};
