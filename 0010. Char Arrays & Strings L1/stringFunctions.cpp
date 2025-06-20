#include <iostream>
using namespace std;

int main()
{
    string name = "Babbar";
    // getline(cin, name);
    cout << "Length of string: " << name.length() << endl;
    cout << "string is empty or not: " << name.empty() << endl;
    cout << "character at 0th position: " << name.at(0) << endl;
    cout << "front character : " << name.front() << endl;
    cout << "back character : " << name.back() << endl;

    cout << endl;

    // append
    string str1 = "Love";
    string str2 = "Babbar";
    cout << "Append: " << str1.append(str2) << endl;

    cout << endl;

    // Erase
    string desc = "This is a Car";
    cout << "Before erase: " << desc << endl;
    desc.erase(4, 3);
    cout << "After erase: " << desc << endl;

    cout << endl;

    // Insert
    string first = "Shivashant";
    string middle = "Manohar";
    cout << "Insert: " << first.insert(5, middle) << endl;
    cout << endl;

    // Push pop
    cout << "name: " << name << endl;
    name.push_back('R');
    cout << "name after pushback(R): " << name << endl;
    name.pop_back();
    cout << "name after popback(): " << name << endl;
    cout << endl;

    // Find
    string str10 = "yaar tera super start desi kalakaar";
    string str11 = "staryyyyy";
    if (str10.find(str11) == string::npos)
    {
        // not found
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    cout << endl;

    // Compare
    string a = "babbAr";
    string b = "babbar";
    if (a.compare(b) == 0)
    {
        cout << "Matching" << endl;
    }
    else
    {
        cout << "Not matching" << endl;
    }
    cout << endl;

    // Substring
    string line = "This is a car, big daddy of all suvs";
    cout << line.substr(19, 5) << endl;
}