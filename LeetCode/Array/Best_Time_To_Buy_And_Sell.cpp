#include<bits/stdc++.h>
using namespace std;

// 121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int buyPrice = prices[0];
    //     int profit = 0;

    //     for (int i = 1; i < prices.size(); i++) {
    //         if (buyPrice > prices[i]) {
    //             buyPrice = prices[i];
    //         }

    //         profit = max(profit, prices[i] - buyPrice);
    //     }

    //     return profit;        
    // }

    //2)
    int n = prices.size();
    int profit =0;
    int miniprice = INT_MAX;

    for(int i=0;i<n;i++){
        miniprice = min(miniprice,prices[i]);
        profit = max(profit,prices[i]-miniprice);
    }
    return profit;
    }
};

int main() {
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};//output=5
    cout<<"max profit:"<<s.maxProfit(prices) << endl;
    return 0;
}