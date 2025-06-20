#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>a){
    int s = 0;
    int e = a.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if( mid+1<a.size() && a[mid]>a[mid+1] ){
            return mid;
        }else if( mid-1>=0 && a[mid-1]>a[mid] ){
            return mid-1;
        }
        if(a[s]>=a[mid]){
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{3,4,5,6,7,1,2};
    int ans = findPivot(arr);
    cout << "Pivot element is "<< arr[ans] <<endl;
    return 0;
}