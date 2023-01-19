class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit{0};
        int lprs{prices[0]};
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < lprs)
            {
                lprs = prices[i];
            }
            if(prices[i] - lprs > profit)
            {
                profit = prices[i] - lprs;
            }
        }
        return profit;
    }
};
