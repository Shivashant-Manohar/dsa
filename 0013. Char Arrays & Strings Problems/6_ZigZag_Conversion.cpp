#include <iostream>
#include <vector>
using namespace std;

/**
 * Converts a given string into a zigzag pattern on a specified number of rows 
 * and then reads the characters line by line to return the final string.
 *
 * @param s The input string to be converted.
 * @param numRows The number of rows to use for the zigzag conversion.
 * @return The converted string after arranging it in a zigzag pattern.
 */
string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;

    vector<string> zigzag(numRows);
    int row = 0;
    int i = 0;
    bool direction = 1; //  --> Top to Bottom
    while (true)
    {
        if (direction)
        {
            while (row < numRows && i < s.size())
            {
                zigzag[row++].push_back(s[i++]);
            }
            row = numRows - 2;
        }
        else
        {
            while (row >= 0 && i < s.size())
            {
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        if (i >= s.size())
            break;
        direction = !direction;
    }
    string ans = "";
    for (int i = 0; i < zigzag.size(); i++)
        ans += zigzag[i];
    return ans;
}

int main()
{
    string s = "PAYPALISHIRING";
    int numRows = 4;
    cout << convert(s, numRows) << endl;
    return 0;
}