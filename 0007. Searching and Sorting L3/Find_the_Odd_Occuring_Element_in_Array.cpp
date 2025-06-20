#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> a ){
    
    int s = 0;
    int e = a.size()-1;
    int mid = s+(e-s)/2;

    while( s<=e ){
        // single element array
        if(s==e){
            return s;
        }
        // 2 cases -> even-mid OR odd-mid
        // EVEN CASE
        if(mid%2==0){
            if(a[mid]==a[mid+1]){
                //right search
                s = mid+2 ;
            }else{
                //left
                e = mid;
            }
        }
        else{
            if(a[mid]==a[mid-1]){
                s = mid+1 ;
            }else{
                e = mid-1 ;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,3,6,6,4,4};
    int ans = solve(arr);
    cout << "Index is "<<ans<<endl;
    cout << "Value is "<< arr[ans]<<endl;
    return 0;
}