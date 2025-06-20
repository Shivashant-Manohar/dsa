#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>arr{1,7,6,10,9,14};
    int n=arr.size();

    //Bubble Sort
    for(int round=1;round<n;round++){
        bool swapped = false;
        for(int j=0;j<(n-round);j++){
            if(arr[j]>arr[j+1]){
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped=false){
            //already sorted, no need to check further  
            break;
        }
    }

    for( auto v:arr){
        cout << v<<" ";
    }
    
    return 0;
    
}    