#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int start = 0;
    int end = 4;
    //Swapping logic
    while(start<=end){
        // swapping extreme points
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    //Printing array
    for(int i=0;i<5;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}