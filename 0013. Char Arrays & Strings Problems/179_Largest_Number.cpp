#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/// <summary>
/// Compares two strings by concatenating them in different orders and 
/// determining which concatenation results in a larger value.
/// </summary>
/// <param name="a">The first string to compare.</param>
/// <param name="b">The second string to compare.</param>
/// <returns>
/// True if the concatenation of <paramref name="a"/> followed by <paramref name="b"/> 
/// is greater than the concatenation of <paramref name="b"/> followed by <paramref name="a"/>.
/// </returns>
static bool mycomp(string a, string b)
{
    string t1 = a + b; // Concatenate a and b
    string t2 = b + a; // Concatenate b and a
    return t1 > t2;    // Return true if t1 is greater than t2
}
static bool mycomp(string a, string b)
{                      // in case 30 and 3
    string t1 = a + b; // 303
    string t2 = b + a; // 330
    return t1 > t2;    // so we get 330 is greater than 303
}

/**
 * @brief Constructs the largest number possible from a vector of integers.
 *
 * This function takes a vector of integers, converts them to strings, 
 * sorts them based on a custom comparator, and concatenates them to form 
 * the largest possible number. If the largest number is zero, it returns "0".
 *
 * @param nums A reference to a vector of integers to be processed.
 * @return A string representing the largest number formed by the integers.
 */
string largestNumber(vector<int> &nums)
{
    vector<string> snums;

    // Convert the integers to string and then insert into vector of strings
    for (auto n : nums)
        snums.push_back(to_string(n));

    // Sort the elements
    sort(snums.begin(), snums.end(), mycomp);

    if (snums[0] == "0")
        return "0";

    // Convert the elements into one single string and return
    string ans = "";
    for (auto str : snums)
        ans += str;
    return ans;
}

int main(){
    vector<int> nums = {3,30,34,5,9};
    string ans = largestNumber(nums);
    cout << ans << endl;
    return 0;
}