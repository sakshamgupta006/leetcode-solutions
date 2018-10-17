// Best Time to Buy and Sell Stock

// Solution Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// Solution


class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit_max = 0;
        int n = prices.size();
        if(n>1)
        {
        int profit;
        int maximum = prices[n-1];
        for(int i= n-2;i>=0;i--)
        {
            profit =  maximum - prices[i];
            maximum = std::max(maximum, prices[i]);
            profit_max = std::max(profit_max, profit);
         
        }
        }
        return profit_max;
        
    }
};