#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t)
{
    // // Bruteforce method: Sorting
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    // return s==t;  // 1=true

    // By Counting or Frequency table
    int freqTable[256]={0};

    for(int i=0;i<s.size();i++){
        freqTable[s[i]]++;
    }
    // for(auto v: freqTable){
    //     cout << v<<endl;
    // }
    for(int i=0;i<t.size();i++){
        freqTable[t[i]]--;
    }
    // for(auto v: freqTable){
    //     cout << v<<endl;
    // }
    for(int i=0;i<256;i++){
        if(freqTable[i] != 0){
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    cout << isAnagram(s, t) << endl;
    return 0;
}