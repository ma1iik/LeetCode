class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_p = INT_MAX;
        int profit = 0;
        for (auto price : prices) {
            min_p = min(price, min_p);
            if (price - min_p > profit)
                profit = price - min_p;
        }
        return profit;
    }
};