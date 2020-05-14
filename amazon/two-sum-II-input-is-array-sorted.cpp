class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        
        int l = 0, r = (int)numbers.size() - 1;
        
        while (l < r) {
            
            int sum = numbers[l] + numbers[r];
            
            if (sum == target) {
                return vector<int>({l + 1, r + 1});
            }
            else if (sum > target) r--;
            else l++;
        }
        
        return vector<int>();
    }
};

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        unordered_map<int, int> myMap;
        vector<int> ans;
        
        for (int n = 0; n < (int)numbers.size(); ++n) {
            
            if (myMap.count(target - numbers[n])) {
                ans.push_back(myMap[target - numbers[n]] + 1);
                ans.push_back(n + 1);
            }
            else {
                myMap[numbers[n]] = n;
            }
        } 
        
        return ans;
    }
};
*/
