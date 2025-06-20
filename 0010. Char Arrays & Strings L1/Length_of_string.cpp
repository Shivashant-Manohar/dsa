#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int findLength(char ch[],int size){
    int index =0;
    while(ch[index] != '\0'){
        index++;
    }
    return index;
}

int main()
{
    char ch[100];
    // cin >>ch;
    cin.getline(ch,100); // counts space also
    int length = findLength(ch,100);
    cout << "Length: "<<length<<endl;
    int len = strlen(ch);
    cout <<"Using inbuile function strlen(ch): "<<len<<endl;
    return 0;
}