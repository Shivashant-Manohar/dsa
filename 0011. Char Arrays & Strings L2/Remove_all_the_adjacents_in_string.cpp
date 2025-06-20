// Leetcode 1047
#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    string ans = "";
    int index = 0;
    while (index < s.length())
    {
        // same hai
        // ans ka rightmost character and string s ka current character
        if (ans[ans.length() - 1] == s[index])
        {
            ans.pop_back();
            cout <<"pop:"<<ans<<endl;
        }
        else
        {
            ans.push_back(s[index]);
            cout <<"push:"<<ans<<endl;
        }
        index++;
        cout <<"index:"<<index<<endl;
    }
    return ans;
}

int main()
{
    string s = "abbsgsytraca";
    string a = removeDuplicates(s);
    cout << a << endl;
    return 0;
}
