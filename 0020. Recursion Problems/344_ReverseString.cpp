#include <iostream>
#include <vector>
using namespace std;

void rev(string &s,int start,int end){
    //Base case
    if(start>=end) return ;

    //Processing
    swap(s[start],s[end]);

    //Recursive call
    rev( s, start+1, end-1);
}

int main() {
    string s = "abcd";
    int start=0,end=s.length()-1;
    rev(s,start,end);
    cout<<s;
    return 0;
}