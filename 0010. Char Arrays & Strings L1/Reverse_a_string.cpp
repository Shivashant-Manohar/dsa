#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void reverseString(char ch[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++, j--;
    }
}

int findLength(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}

int main()
{
    char ch[100];
    // cin >>ch;
    cin.getline(ch, 100); // counts space also
    int length = findLength(ch, 100);
    cout << "Length: " << length << endl;
    int len = strlen(ch);
    cout << "Using inbuilt function strlen(ch): " << len << endl;
    reverseString(ch, length);
    cout << ch << endl;
    return 0;
}