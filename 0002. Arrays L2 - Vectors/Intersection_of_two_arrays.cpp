#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    vector<int> arr={2,4,5,8,9};
    vector<int> brr={1,2,3,4,7,8,9};

    vector<int>ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i]==brr[j]){
                int brr[j]={INT_MIN};
                ans.push_back(arr[i]);
            }
        }
    }

    for( auto value: ans ){
        cout<<value<<" ";
    }

    return 0;
}





















