// You are given an array prices where prices[i] is the price of a given stock on the
// ith day.

// You want to maximize your profit by choosing a single day to buy one stock and
// choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot
//  achieve any profit, return 0.

// Approach: Storing min element and max profit(arr[i]-minimum element) and
// returning max profit

int maxProfit(vector<int> &prices)
{
    int profit = 0;
    int min_value = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        min_value = min(prices[i], min_value);
        profit = max(profit, prices[i] - min_value);
    }
    return profit;
}