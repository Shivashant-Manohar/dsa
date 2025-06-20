#include <iostream>
#include <strings.h>
using namespace std;

bool checkPalindrome(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++, j--;
        }
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++, j--;
        }
        else
        {
            // s[i] != s[j]
            // 1 removal allowed
            // check palindrome for remaining string after removal

            // removing ith character
            bool ans1 = checkPalindrome(s, i + 1, j);
            // removing jth character
            bool ans2 = checkPalindrome(s, i, j - 1);

            // return OR of both answers
            return ans1 || ans2;
        }
    }
    // if we're here , it means palindrome hai i.e 0 removal
    return true;
}

int main()
{
    string s = "abc";
    if (validPalindrome(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}