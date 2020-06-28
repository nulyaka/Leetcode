class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0;
        int bestPrice = INT_MAX;
        
        for (int curPrice: prices) {
            
            if (bestPrice > curPrice) 
                bestPrice = curPrice;
            else 
                maxProfit = max(maxProfit, curPrice - bestPrice);
        }
        
        return maxProfit;
    }
};
