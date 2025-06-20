#include<iostream>
#include<vector>
#include <string>
using namespace std;

string LongestCommonPrefix(vector<string> strs){
    string ans;
    int i = 0;
    while(true){
        char currChar = 0;
        for(auto str: strs){
            if(i>str.size()){
                currChar=0;
                break;
            }
            if(currChar==0){
                currChar = str[i];
            } else if(currChar != str[i]){
                currChar=0;
                break;
            }
        }
        if(currChar==0){ break;}
        ans.push_back(currChar);
        i++;
    }
    return ans;
}

int main(){
    vector<string> strs ={"flower","flow","flight"};
    cout << LongestCommonPrefix(strs)<<endl;
    return 0;
}


















































// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to check if a given character is present in the same position in all strings
// bool isCommonPrefix(const vector<string> &strs, char ch, int index)
// {
//     // Iterate through each string in the vector
//     for (const string &str : strs)
//     {
//         // Check if the index is beyond the length of the current string
//         // or if the character at the current index is not equal to the given character
//         //cout <<"str: "<<str<<endl;
//         if (index >= str.length() || str[index] != ch)
//         {
//             // If either condition is true, return false
//             return false;
//         }
//     }
//     // If the loop completes without returning false, the character is common at the current position
//     return true;
// }

// // Function to find the longest common prefix among a vector of strings
// string longestCommonPrefix(const vector<string> &strs)
// {
//     // Check if the vector is empty
//     if (strs.empty())
//     {
//         // If empty, return an empty string
//         return "";
//     }

//     // Initialize an empty string to store the result (longest common prefix)
//     string result = "";

//     // Iterate through each character position in the first string in the vector
//     for (int i = 0; i < strs[0].length(); ++i)
//     {
//         // Get the character at the current position in the first string
//         char ch = strs[0][i];

//         // Check if this character is common at the current position in all strings
//         if (isCommonPrefix(strs, ch, i))
//         {
//             // If common, append the character to the result
//             result += ch;
//         }
//         else
//         {
//             // If not common, break the loop as we have found the longest common prefix
//             break;
//         }
//     }

//     // Return the final result (longest common prefix)
//     return result;
// }

// int main()
// {
//     // Example usage with a vector of strings
//     vector<string> strs = {"flower", "flow", "flight"};

//     // Find the longest common prefix
//     string commonPrefix = longestCommonPrefix(strs);

//     // Output the result
//     cout << commonPrefix << endl;

//     return 0;
// }
