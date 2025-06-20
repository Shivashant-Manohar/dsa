#include <iostream>
#include <string>

using namespace std;

// Custom implementation of the erase function
string customErase(const string& input, size_t pos, size_t count) {
    // Copy the original string to avoid modifying it directly
    string result = input;

    // Erase the specified portion from the copied string
    result.erase(pos, count);

    // Return the modified string
    return result;
}

int main() {
    // Example input string
    string inputString = "This is a sample string.";

    // Erase a portion of the string starting from position 5 (inclusive) with a count of 5 characters
    size_t erasePos = 5;
    size_t eraseCount = 5;

    // Call the custom erase function
    string resultString = customErase(inputString, erasePos, eraseCount);

    // Print the original and modified strings
    cout << "Original string: " << inputString << endl;
    cout << "Modified string: " << resultString << endl;

    return 0;
}
