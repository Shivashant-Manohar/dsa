#include <iostream>
#include <strings.h>
#include <vector>
using namespace std;

// this functin normalises all the words and pattern into a similar format
// so that we can compare them and find that solution
void createMapping(string &str)
{
    // find mapping
    char start = 'a';
    char mapping[300] = {0};
    for (auto ch : str)
    {
        if (mapping[ch] == 0)
        {
            mapping[ch] = start;
            start++;
        }
    }
    // update the string
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        str[i] = mapping[ch];
    }
}

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
    vector<string> ans;

    // firstly normalise patter
    createMapping(pattern);

    // saare words ke sath khelna hai
    for (string s : words)
    {
        string tempString = s;
        // normalise tempString
        createMapping(tempString);

        if (tempString == pattern)
        {
            // it means string s is a valid answer
            ans.push_back(s);
        }
    }
    return ans;
}

int main()
{
    vector<string> words{"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";
    vector<string> ans = findAndReplacePattern(words, pattern);
    for (auto ch : ans)
    {
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}