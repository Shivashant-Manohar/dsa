#include <iostream>
using namespace std;

/**
 * Checks if a given string is a palindrome.
 *
 * A palindrome is a string that reads the same forward and backward.
 *
 * @param s The string to be checked.
 * @param start The starting index for the check.
 * @param end The ending index for the check.
 * @return true if the substring from start to end is a palindrome, false otherwise.
 */
bool isPalindrome(string &s, int start, int end)
{
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++, end--;
    }
    return true;
}

/**
 * @brief Finds the longest palindromic substring in the given string.
 * 
 * This function iterates through all possible substrings of the input string `s`
 * and checks if they are palindromes. It keeps track of the longest palindromic
 * substring found.
 * 
 * @param s The input string in which to find the longest palindromic substring.
 * @return The longest palindromic substring in the input string.
 */
string longestPalindrome(string s)
{
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (isPalindrome(s, i, j))
            {
                string t = s.substr(i, j - i + 1);
                ans = t.size() > ans.size() ? t : ans;
            }
        }
    }
    return ans;
}

int main()
{
    string s = "babad";
    cout << longestPalindrome(s) << endl;
    return 0;
}