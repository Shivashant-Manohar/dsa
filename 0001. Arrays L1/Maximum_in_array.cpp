#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={31,45,66,27,89};
    int size = 5;
    int maxi = INT_MIN; // best practice is to make maxi = minimum possible integer value
    for(int i=0;i<size;i++){
        if ( maxi < arr[i]){
            maxi = arr[i];
        }
    }
    cout << "Maximum No is: " <<maxi <<endl;
    return 0;
}