#include <iostream>
#include <strings.h>
using namespace std;

string RevOnlyLetters(string s)
{
    int l = 0;
    int h = s.size()-1;
    while(l<=h){
        if( isalpha(s[l]) && isalpha(s[h])){
            swap(s[l],s[h]); l++,h--;
        }
        else if( !isalpha(s[l])){
            l++;
        }
        else if(!isalpha(s[h])){
            h--;
        }
    }
    return s;
}
int main()
{
    string s = "Test1ng-Leet=code-Q!";
    cout << RevOnlyLetters(s) << endl;
    return 0;
}