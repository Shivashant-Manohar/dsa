#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;    // Two pointer approach
    int end = size-1;
    while(start<=end) {
        if (start>end){   //to stop array in middle,otherwise start will travel again completely
            break;
        } else if( start == end){ //to remove elements getting print 2 times
            cout << arr[start]<<" ";
        }else{
            cout << arr[end]<<" ";
            cout << arr[start]<<" ";
        }
        end--;         // updating start and end pointers/variables
        start++;
    }
}