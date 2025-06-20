#include <iostream>
#include <string>
#include <climits>

using namespace std;

/**
 * Converts a string to an integer.
 *
 * This function implements the logic to convert a string representation of 
 * an integer into its integer value. It handles leading whitespaces, 
 * optional signs, and checks for overflow conditions.
 *
 * @param s The input string to be converted to an integer.
 * @return The integer value represented by the string, or INT_MAX or 
 *         INT_MIN if the value is out of the 32-bit signed integer range.
 */
int myAtoi(string s)
{
    int num = 0, i = 0, sign = 1; // +ve
    while (i < s.size() && s[i] == ' ')
    {
        i++; // Leading whitespaces removed
    }
    if (i < s.size() && (s[i] == '-' || s[i] == '+'))
    {
        sign = s[i] == '+' ? 1 : -1; // sign found
        // if s[i]=="+" hai, toh 1 rehne do, nahi toh -1 karo.
        ++i;
    }
    while (i < s.size() && isdigit(s[i]))
    {
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
        {
            return sign == -1 ? INT_MIN : INT_MAX; // out of range handled
        }
        num = num * 10 + (s[i] - '0');
        ++i;
    }
    return num * sign;
}

int main()
{
    string s = "1234";
    cout << myAtoi(s) << endl;
    return 0;
}
