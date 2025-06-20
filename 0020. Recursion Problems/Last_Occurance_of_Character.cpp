#include <iostream>
#include <vector>
using namespace std;

// int lastOccurance(string s, char target, int index, int a)
// {
//     // Base case
//     if (index >= s.length())
//         return a;

//     // Processing
//     if (s[index] == target)
//     {
//         a = index;
//     }

//     // Recursion call
//     return lastOccurance(s, target, index + 1, a);
// }


int lastOccurance(string s, char target, int index)
{
    // Base case
    if (index < 0 )
        return -1;

    // Processing
    if (s[index] == target)
    {
        return index;
    }

    // Recursion call
    return lastOccurance(s, target, index - 1);
}

int main()
{
    string s = "abcddefg";
    char target = 'd';
    int result = lastOccurance(s, target, s.length()-1);
    if (result == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}