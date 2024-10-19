#include <iostream>
#include <vector>
#include <algorithm> // for std::min and std::max

int maxProfit(std::vector<int>& prices) {
    if (prices.empty()) {
        return 0; // Return 0 if prices vector is empty
    }

    int bestBuy = prices[0], maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > bestBuy) {
            maxProfit = std::max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = std::min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example prices
    int profit = maxProfit(prices);
    std::cout << "Maximum profit: " << profit << std::endl; // Output the result
    return 0;
}