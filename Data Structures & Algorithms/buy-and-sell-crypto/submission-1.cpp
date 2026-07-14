class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minV = prices[0];
        int n = prices.size();
        int profit = 0;
        int MaxProfit = 0;
        for( int i = 1; i < n; i++)
        {
            if(prices[i] < minV)
            {
                minV = prices[i];
            }
            else
            {
                profit = prices[i] - minV;
            }
                MaxProfit = max(MaxProfit, profit);
        }
        return MaxProfit;
    }
};
