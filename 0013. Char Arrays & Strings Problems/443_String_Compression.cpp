#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char> &chars)
{
    int freqTable[256] = {0};
    bool isMarked[256] = {0};
    vector<char> hey;
    for (int i = 0; i < chars.size(); i++)
    {
        int count = 1;
        if (freqTable[chars[i]] == 0 && isMarked[chars[i]] == 0)
        {
            count += 1;
            freqTable[chars[i]] = chars[i];
        }
        hey.push_back(count);
    }
    return hey.size();
}

int main()
{
    vector<char> c = {'a','a','b','b','c','c','c'};
    cout << compress(c) << endl;
    return 0;
}