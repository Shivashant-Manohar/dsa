#include<iostream>
#include<string.h>
using namespace std;

void convertToUpperCase(char ch[], int n){
    int index = 0;
    while(ch[index]!='\0'){
        // check if lowercase , then only convert to uppercase
        if(ch[index]>='a' && ch[index]<='z'){
            ch[index] = ch[index] -'a'+'A';
        }
        ++index;
    }
}

int main()
{
    char ch[100];
    cin.getline(ch, 100);
    convertToUpperCase(ch, 100);
    cout << ch;
    return 0;
}