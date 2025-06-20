#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> mp;
    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }
    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
    // Time Compllexity=O(N*K logK) , SC= O(N*K)
}

int main()
{
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    for ( auto &group : result)
    {
        for (auto &str : group)
        {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}
