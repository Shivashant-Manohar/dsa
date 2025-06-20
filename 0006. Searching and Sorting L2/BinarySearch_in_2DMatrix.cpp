#include<iostream>
#include<vector>
using namespace std;

bool BinarySearch(vector<vector<int>> arr, int rows, int cols, int target){
    int totalSize = rows*cols;
    int start = 0;
    int end = totalSize-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        int rowIndex= mid/cols;
        int colIndex= mid%cols;
        if(arr[rowIndex][colIndex]==target){
            cout <<"Found at Row: "<<rowIndex<<" , Col: "<<colIndex<<endl;
            return true;
        }else if(arr[rowIndex][colIndex] < target){
            start = mid + 1 ;
        }else{
            end = mid - 1 ;
        }
        mid = start+(end-start)/2;
    }
    return false;
}

int main(){
    vector<vector<int>> arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    int rows = arr.size();
    int cols = arr[0].size();
    // cout <<"Rows: "<< rows <<endl;
    // cout <<"Cols: "<< cols <<endl;

    int target;
    cout <<"Enter the number to find: ";
    cin >> target;

    bool ans = BinarySearch(arr, rows, cols, target);

    if(ans){
        cout << "Found"<<endl;
    }else{
        cout << "Not Found"<<endl;
    }

    return 0;

}