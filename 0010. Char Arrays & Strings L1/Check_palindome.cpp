#include<iostream>
#include<string.h>
using namespace std;

bool CheckPalindrome(char ch[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++,j--;
        }else{
            return  false;
        }
    }
    return true;
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len = strlen(ch);
    if(CheckPalindrome(ch, len)){
        cout <<"Palindrome!"<<endl;
    }else{
        cout <<"Not a palindrome."<<endl;
    }
    return 0;
}