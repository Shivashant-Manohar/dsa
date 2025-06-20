#include<iostream>
using namespace std;
int zeroArr( int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count ++;
        }
    }
    return count;
}
int oneArr( int arr[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count ++;
        }
    }
    return count;
}
int main(){
    int arr[]={1,0,0,1,1,1};
    int size = 6;
    int zerocount = zeroArr(arr,size);
    int onecount = oneArr(arr,size);
    cout<< "No of Zeroes: "<< zerocount <<endl;
    cout<< "No of Ones: "<< onecount << endl;
    return 0;
}