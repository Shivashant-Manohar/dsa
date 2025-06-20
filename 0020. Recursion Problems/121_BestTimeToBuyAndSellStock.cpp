#include <iostream>
#include <vector>
using namespace std;

int profitRecursion(vector<int> &prices, int lowerIndex, int index, int maxProfit)
{
    if (index >= prices.size())
        return maxProfit;

    int currentProfit = prices[index] - prices[lowerIndex];
    maxProfit = max(maxProfit, currentProfit);

    // If we find a lower price, update lowerIndex
    if (prices[index] < prices[lowerIndex])
    {
        lowerIndex = index;
    }

    return profitRecursion(prices, lowerIndex, index + 1, maxProfit);
}

int maxProfit(vector<int> &prices)
{
    if (prices.empty())
        return 0;
    return profitRecursion(prices, 0, 1, 0);
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(arr) << endl;

    return 0;
}