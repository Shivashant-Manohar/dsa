#include <iostream>
#include <strings.h>
#include <algorithm>
using namespace std;
string str;
bool compare(char char1, char char2)
{
    // this will return true if position of character1 in str string
    // is less than position of character 2 in str string

    // when true is returned , then character1 will be placed before
    // character2 in output string
    return (str.find(char1) < str.find(char2));
}

string customSortString(string order, string s)
{
    str = order;
    sort(s.begin(), s.end(), compare);
    return s;
}

int main()
{
    string order = "cba";
    string s = "abcd";
    cout << customSortString(order, s) << endl;
    return 0;
}