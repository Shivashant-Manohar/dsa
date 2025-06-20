#include <iostream>
#include <vector>
using namespace std;

void generateSubsequences(string str,string output, int index,vector<string>&ans){

    // Base case
    if(index>=str.length()){
        //cout << output << endl;
        ans.push_back(output);
        return;
    }
    
    //Processing
    char ch = str[index];
    // 1. Include
    output.push_back(ch);
    generateSubsequences(str,output,index+1,ans);

    // 2. Exclude
    // Yaha ch nhi include karna tha, but already included
    output.pop_back(); // so remove and then call
    generateSubsequences(str,output,index+1,ans);

}

// Wrapper function to simplify calling from main
vector<string> getSubsequences(string str) {
    vector<string> ans = {};
    generateSubsequences(str, "", 0, ans); // Helper function to fill ans
    return ans; // Return the filled vector
}


int main() {
    string str = "ABC";
    vector<string> subsequences = getSubsequences(str); // Get all subsequences

    // Output all subsequences
    vector<string> ans = getSubsequences(str);
    for (auto v : ans) {
        cout << v << endl; // Print empty subsequence as ""
    }

    return 0;
}