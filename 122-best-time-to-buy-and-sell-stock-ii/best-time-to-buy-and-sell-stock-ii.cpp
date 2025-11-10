class Solution {
public:
    int maxProfit(std::vector<int>& price) {
        int n = price.size();
        if (n <= 1) {
            return 0; 
        }
        int max_profit = 0;
        for (int i = 1; i < n; i++) {
            if (price[i] > price[i - 1]) {
                max_profit += price[i] - price[i - 1];
            }
        }
        return max_profit;
    }
};