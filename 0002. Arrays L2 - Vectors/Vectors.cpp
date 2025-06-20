#include<iostream>
#include<vector> //vector header file to use vector in our program
using namespace std;
int main(){
    vector<int>arr;
    int ans= (sizeof(arr)/sizeof(int)); //compiler dependent
    // Checking default array size
    cout << arr.size()    << endl;
    cout << arr.capacity()<< endl;
    // Initialisation
    arr.push_back(5); //inserting 5 into array
    arr.push_back(6); //inserting 6 into array
    // Printing vector
    for(int i=0;i<arr.size();i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    // Removes last element inserted
    arr.pop_back();
    // Initialisation
    vector<int>brr(10,1);
    for(int i=0;i<brr.size();i++){
        cout << brr[i] <<" ";
    }
    cout << endl;
    // Empty Function
    cout << brr.empty() << endl;
}