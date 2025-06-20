#include<iostream>
#include<vector>
using namespace std;

int FindUnique(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int n;
    cout <<"Enter the Size of array: " ;
    cin>>n;

    vector<int>arr(n);
    cout <<"Enter the Elements of array: ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    int UniqueElement= FindUnique(arr);

    cout <<"The Unique Element is: " << UniqueElement << endl;

    return 0;
}