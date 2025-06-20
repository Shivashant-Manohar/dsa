#include <iostream>
#include <strings.h>
#include <algorithm>
using namespace std;

string decodeMessage(string key, string message)
{
    // 1.create mapping
    char start = 'a';
    char mapping[280] = {0};

    // for (int i = 0; i < key.length(); i++)
    // {
    //     char ch = key[i];
    //     if (ch != ' ' && mapping[ch] == 0)
    //     {
    //         cout << "mapping[" << ch << "] = start--> " << start << endl;
    //         mapping[ch] = start;
    //         start++;
    //     }
    // }

    for (auto ch : key)
    {
        if (ch != ' ' && mapping[ch] == 0)
        {
            cout << "mapping[" << ch << "] = start--> " << start << endl;
            mapping[ch] = start;
            start++;
        }
    }
 
    // 2.use mapping
    string ans;

    //for(auto ch : message)
    for (int i = 0; i < message.length(); i++)
    {
        char ch = message[i]; //encoded character
        if (ch == ' ')
        {
            ans.push_back(' ');
        }
        else
        {
            char decodedChar = mapping[ch]; //decoded character
            ans.push_back(decodedChar);
        }
    }
    return ans;
}

int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    cout << decodeMessage(key, message) << endl;
    return 0;
}