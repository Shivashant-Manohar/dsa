#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int FindMax(int arr[][2],int rows,int cols){
    int maxi = INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    } 
    return maxi;
}
int FindMin(int arr[][2],int rows,int cols){
    int mini = INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    } 
    return mini;
}
int main(){
    int arr[4][2]={67,21,16,41,35,27,10,89};
    int rows= 4;
    int cols= 2;
    int max = FindMax(arr,rows,cols);
    int min = FindMin(arr,rows,cols);
    cout << max <<" is the Maximum number"<<endl;
    cout << min <<" is the Minimum number"<<endl;
    return 0;
}