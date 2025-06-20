#include<iostream>
#include<strings.h>
using namespace std;

void removeOccurance(string &s, string part){
    while(s.find(part)!=string::npos){
        s.erase(s.find(part),part.length());
    }
}

int main(){
    string s = "abbcbaddcbabbbaae";
    string part = "cba";
    removeOccurance(s,part);
    cout << s <<endl;
    return 0;
}