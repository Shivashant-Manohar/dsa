#include<iostream>
#include<vector>
using namespace std;
int findRowSum(int arr[][4],int rows , int cols){
    int sum = 0;
    for(int i=0;i<rows;i++){
        int sum = 0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];            
        }
        cout <<"Sum of Row "<<i<<" is "<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={1,3,5,2,7,6,4,9,4,5,8,4};
    int rows = 3;
    int cols = 4;
    findRowSum(arr,rows,cols);    
    return 0;
}
