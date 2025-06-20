#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr{5,4,6,3,2,1};
    int n=arr.size();
    
    // Selection Sort

    //Outer loop: number of rounds
    for(int i=0;i<n-1;i++){  //n-1: till last 2nd element
        int minIndex = i;
        //Inner Loop: Find min in range{i to n}
        for(int j=i+1;j<n;j++){
            if( arr[j] < arr[minIndex] ){
                //new minimum,then store
                minIndex = j;
            }
        }
        // Swap
        swap(arr[i],arr[minIndex]);
    }

    for(auto v:arr){
        cout <<v <<" ";
    }

    return 0;
}