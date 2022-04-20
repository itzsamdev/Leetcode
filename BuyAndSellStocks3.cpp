// You are given an array prices where prices[i] is the price of a given stock
// on the ith day.

// Find the maximum profit you can achieve. You may complete at most two transactions.

// Note: You may not engage in multiple transactions simultaneously (i.e., you must
// sell the stock before you buy again).

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &nums)
{
    int minPrice1 = INT_MAX;
    int maxProfit1 = 0;
    int minPrice2 = INT_MAX;
    int maxProfit2 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        minPrice1 = min(minPrice1, nums[i]);
        maxProfit1 = max(maxProfit1, nums[i] - minPrice1);

        minPrice2 = min(minPrice2, nums[i] - maxProfit1);
        maxProfit2 = max(maxProfit2, nums[i] - minPrice2);
    }
    return maxProfit2;
}