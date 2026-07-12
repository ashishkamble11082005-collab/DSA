class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
         return 0;
        
        int mini = prices[0];  
        int max_profit = 0;   
        int n = prices.size();
        
        for(int i = 1; i < n; i++) {
            int potential_profit = prices[i] - mini;
            max_profit = max(max_profit, potential_profit);
            mini = min(mini, prices[i]);
        }
        
        return max_profit;
    }
};