#include<iostream>
#include<vector>
using namespace std;
bool LinearSearch(int arr[][4],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
    
}
int main(){
    int arr[3][4]={{1,3,5,2},{7,6,4,9},{4,5,8,4}};
    int row=3;
    int col=4;
    int key=20;
    // cout <<"Enter a number to Search: ";
    // cin >> key;

    //LinearSearch(arr,row,col,key);
    bool ans = LinearSearch(arr,row,col,key);

    if(ans){
        cout << key <<" is Present"<<endl;
    }else{
        cout << key<<" is not Present "<<endl;
    }

    return 0;
    
}