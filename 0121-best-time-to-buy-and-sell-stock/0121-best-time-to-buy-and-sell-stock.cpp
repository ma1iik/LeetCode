class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int profit = 0;
        for (auto price : prices) {
            minprice = min(price, minprice);
            profit = ((price - minprice) > profit) ? (price - minprice) : profit;
        }
        return profit;
    }
};