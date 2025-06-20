#include<iostream>
using namespace std;
bool findElement(int arr[],int size,int search){
    for(int i=0;i<size;i++){  //Transversing an Array
        if (arr[i]==search){  //Comparing search with each element
            return true;   // If found,then return true and exit from function
        }
    }
    return false;
}
int main(){
    int arr[]={1,3,5,7,9,15,22,34};
    int size = 8;
    int search ;
    cout << "Enter the element: " ;
    cin>> search;
    bool ans = findElement(arr,size,search); // calling the boolean function
    if (ans){
        cout << "Element Found" << endl;
    } else {
        cout << "Element not Found" <<endl;
    }
}