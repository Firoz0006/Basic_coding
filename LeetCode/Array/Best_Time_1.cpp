#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buyprice = prices[0];
        int n = prices.size();
        for(int i = 1;i<n; i++){
            if(buyprice < prices[i]){
                profit += prices[i] - buyprice;
            }
            buyprice = prices[i];
        }
        return profit;
    }
};
int main() {
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};//output=4+3=7
    cout<<"max profit:"<<s.maxProfit(prices) << endl;
    return 0;
}
