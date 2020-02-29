class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int d(0); // stands for duplicates
        
        for (int i(0); i < nums.size(); ++i) {
            
            if (nums.at(i) == val)
                d++;
            else if (d) 
                nums.at(i - d) = nums.at(i);
        }
        
        return nums.size() - d;
    }
};
