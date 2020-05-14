class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0;
        
        for (int day = 1; day < (int)prices.size(); ++day) {
            
            maxProfit += max(prices[day] - prices[day - 1], 0);
        }
        
        return maxProfit;
    }
};
