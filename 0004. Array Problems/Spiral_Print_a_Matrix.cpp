#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> v{
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30}
    };
    int m = v.size();
    int n = v[0].size();

    int totalElements = m*n;
    int StartRow = 0;
    int EndCol = m-1;
    int EndRow = n-1;
    int StartCol = 0;
    int Count = 0;

    vector<int> ans;

    while(Count<totalElements){
        // PRINT STARTING ROW
        for(int i=StartCol;i<=EndCol && Count<totalElements;i++){
            ans.push_back(v[StartRow][i]);
            Count++ ;
        }
        StartRow++;
        // PRINT ENDING COLUMN
        for(int i=StartRow;i<=EndRow && Count<totalElements;i++){
            ans.push_back(v[i][EndCol]);
            Count++ ;
        }
        EndCol--;
        // PRINTING ENDING ROW
        for(int i=EndCol;i>=StartCol && Count<totalElements;i--){
            ans.push_back(v[EndRow][i]);
            Count++ ;
        }
        EndRow--;
        // PRINTING STARTING COL
        for(int i=EndRow;i>=StartRow && Count<totalElements;i--){
            ans.push_back(v[i][StartCol]);
            Count++ ;
        }
        StartCol++;
    }
    for(auto value: ans){
        cout << value << " ";
    }
    
}