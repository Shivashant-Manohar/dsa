#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int> &nums, int i)
{
    // Base case
    if (i >= nums.size())
        return 0;

    // Processing
    int amt1 = nums[i] + rob(nums, i + 2);
    int amt2 = 0 + rob(nums, i + 1);

    return max(amt1, amt2);
}

int main()
{
    vector<int> a = {2, 7, 9, 3, 1};
    cout << rob(a, 0);

    return 0;
}

