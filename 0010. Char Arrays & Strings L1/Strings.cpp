#include <iostream>
using namespace std;

int main()
{
    // creation
    string name;

    // input
    // cin >> name;
    getline(cin,name);

    // print
    cout << "Printing name: " << name << endl;

    cout << "Printing 1st character: " << name[0] << endl;

    int index = 0;
    while (name[index] != '\0')
    {
        cout << "index: " << index << "   character: " << name[index] << endl;
        index++;
    }

    cout << "Printing 6th index value: " << name[6] << endl; // kuch bhi print nhi hua
    int value = (int)name[6];
    cout << "Value: " << value << endl; // 0 mil gaya, toh null operator is present

    return 0;
}