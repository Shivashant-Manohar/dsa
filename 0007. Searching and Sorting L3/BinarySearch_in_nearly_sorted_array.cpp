#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> a,int target){
    int s = 0;
    int e = a.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(a[mid]==target){
            return mid;
        }
        else if( mid+1 < a.size() && a[mid+1]==target){
            return mid+1;
        }
        else if( mid-1>=s && a[mid-1]==target){
            return mid-1;
        }

        if(target>a[mid]){
            s=mid+2;
        }else{
            e=mid-2;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target = 20;

    int ans= binarysearch(arr,target);
    cout << "Index of "<<target<<" is "<<ans<<endl;

    return 0;
}