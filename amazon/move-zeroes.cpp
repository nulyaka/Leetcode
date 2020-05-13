class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        for (int l = 0, r = 0; r < (int)nums.size(); ++r) {
            
            if (nums[r]) {
                swap(nums[l], nums[r]);
                l++;
            }
        }
    }
};
