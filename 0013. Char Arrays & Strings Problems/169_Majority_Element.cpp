#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>arr){
    sort(arr.begin(),arr.end());
    int start=0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    return arr[mid];
}

int main(){
    vector<int>arr{2,2,1,1,1,2,2};
    cout << "Majority element: "<<majorityElement(arr)<<endl;
    return 0;
}