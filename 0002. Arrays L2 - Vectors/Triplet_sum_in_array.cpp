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
        for(int j=i+1;j<arr.size();j++){
            for (int k=j+1;k<arr.size();k++){
                if ( element+arr[j]+arr[k] == target ){
                cout <<"Pair Found: ["<< element<<"," << arr[j]<<","<<arr[k]<<"]"<<endl;
                cout <<"Index: "<<"["<<i<<","<<j<<","<<k<<"]"<<endl;
                 }
            }

        }

    }
}