#include<bits/stdc++.h>
using namespace std;

// 121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int min_price = prices[0];
        int max_profit = 0;

        for (int price : prices) {
            // Update the minimum price seen so far
            min_price = min(min_price, price);

            // Calculate the profit if selling at the current price
            int profit = price - min_price;

            // Update the maximum profit if this profit is greater
            max_profit = max(max_profit, profit);
        }

        return max_profit;
    }
};