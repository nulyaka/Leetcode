class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int, int> hashArr1;
        
        for (auto &a: arr1) {
            hashArr1[a]++;
        }
        
        vector<int> res;
        
        for (auto &a: arr2) {
            
            while (hashArr1.at(a)) {
                res.push_back(a);
                hashArr1.at(a)--;
            }
        }
        
        for (auto &h: hashArr1) {
            
            while (h.second) {
                res.push_back(h.first);
                h.second--;
            }
        }
        
        return res;
    }
};
