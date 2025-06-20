#include <iostream>
#include <string>

using namespace std;

// Custom implementation of the find function without using standard library functions
size_t customFind(const string& input, const string& target) {
    // Iterate through the input string
    for (size_t i = 0; i <= input.length() - target.length(); ++i) {
        // Check for a match starting at position i
        bool match = true;
        for (size_t j = 0; j < target.length(); ++j) {
            // Compare characters in the target substring with characters in the input string
            if (input[i + j] != target[j]) {
                // If characters do not match, set match to false and break out of the inner loop
                match = false;
                break;
            }
        }
        // If a match is found, return the starting position
        if (match) {
            return i;
        }
    }
    // Return string::npos if the substring is not found
    return string::npos;
}

int main() {
    // Example input string
    string inputString = "This is a sample string. Sample is the keyword.";
    // Substring to search for
    string searchString = "Sample";

    // Call the custom find function
    size_t position = customFind(inputString, searchString);

    // Check if the substring is found
    if (position != string::npos) {
        // Print the position of the first character of the first occurrence
        cout << "Substring found at position: " << position << endl;
        // Extract and print the found substring
        string foundSubstring = inputString.substr(position, searchString.length());
        cout << "Found substring: " << foundSubstring << endl;
    } else {
        // Indicate that the substring is not found
        cout << "Substring not found." << endl;
    }

    return 0;
}
