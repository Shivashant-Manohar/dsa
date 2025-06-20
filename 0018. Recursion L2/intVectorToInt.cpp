#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int mergeDigits(vector<int> &digits, int index, int multiplier)
{
    // Base class
    if (index >= digits.size() || multiplier < 0)
        return 0;

    // Processing algorithm
    int ans = digits[index] * multiplier;
    //cout << ans << endl;

    // Recursion algorithm
    ans += mergeDigits(digits, index + 1, multiplier / 10);
    //cout << ans << endl;
    return ans;
}

int main() 
{
    vector<int> digits = {1, 8, 1, 8};
    int index = 0;
    int multiplier = pow(10, digits.size() - 1);
    cout << mergeDigits(digits, index, multiplier) << endl;

    return 0;
}