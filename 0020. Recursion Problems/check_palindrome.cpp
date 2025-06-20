#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string &s,int start,int end){
    // Base case
    if(start>=end) return true ;

    // Processing
    if(s[start]!=s[end]){
        return false;
    }

    // Recursive call
    return isPalindrome(s,start+1,end-1);
}

int main() {
    string s = "adbcbda";
    if(isPalindrome(s,0,s.length()-1)){
        cout <<"Palindrome";
    }else{
        cout <<"Not palindrome";
    }
    return 0;
}