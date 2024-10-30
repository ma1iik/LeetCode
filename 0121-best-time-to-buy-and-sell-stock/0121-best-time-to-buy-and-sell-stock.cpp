class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int profit = 0;
        for (const auto& price : prices) {
            minprice = min(price, minprice);
            profit = std::max(profit, price - minprice);
        }
        return profit;
    }
};