#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();

    // Insertion Sort
    for(int round=1; round<n;round++){
        // Step 1: Fetch value
        int val = arr[round];
        // Step 2: Compare
        int j = round-1;
        for(; j>=0; j--){
            if(arr[j]>val){
                // Step 3: Shift
                arr[j+1]=arr[j];
            }
            else{
                // Rukna hai
                break;
            }
        }
        // Step 4: Copy
        arr[j+1]=val;
    }

    for(auto v: arr){
        cout << v<<" ";
    }
}
