#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target ;
    cout <<"Sum: ";
    cin >> target;
    vector<int> arr{10,20,30,40,50};
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        //cout << "Pairing with Element: "<<element << endl;
        for(int j=i+1;j<arr.size();j++){
            // cout << "(" <<element <<","<< arr[j]<<")"<< endl;
            if ( element+arr[j] == target ){
                cout <<"Pair Found: ["<< element<<"," << arr[j]<<"]"<<endl;
                cout <<"Index: "<<"["<<i<<","<<j<<"]"<<endl;
            }
        }

    }
}




// GFG
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(arr[i]+arr[j]==x){
	                return true;
	            }
	        }
	    }
	    return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends