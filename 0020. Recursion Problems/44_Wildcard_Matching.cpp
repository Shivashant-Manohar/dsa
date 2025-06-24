#include <iostream>
#include <vector>
using namespace std;

bool isMatching(string &s, string &p, int si, int pi)
{
    // Base case
    if (si == s.size() && pi == p.size())
    {
        return true;
    }
    if (si == s.size() && pi < p.size())
    {
        while (pi < p.size())
        {
            if (p[pi] != '*')
                return false;
            pi++;
        }
        return true;
    }

    // Single character matching
    if (s[si] == p[pi] || '?' == p[pi])
    {
        return isMatching(s, p, si + 1, pi + 1);
    }
    if (p[pi] == '*')
    {
        // treat * as empty/null
        bool caseA = isMatching(s, p, si, pi + 1);
        // let * consume one character
        bool caseB = isMatching(s, p, si + 1, pi);

        return caseA || caseB;
    }

    // character does not match
    return false;
}

int main()
{
    string s = {"abcdefg"};
    string p = {"abc*"};
    if (isMatching(s, p, 0, 0))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}