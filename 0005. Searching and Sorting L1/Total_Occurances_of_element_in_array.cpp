#include<iostream>
#include<vector>
#include<algorithm>
#include<typeinfo>

using namespace std;

int firstOccurance(vector<int>arr, int target){
    int s=0;
    int e=arr.size()-1;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==target){
            ans = m; // store ans
            e=m-1; // go left
        } else if (arr[m]>target){
            e=m-1; // go left
        } else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int lastOccurance(vector<int>arr, int target){
    int s=0;
    int e=arr.size()-1;
    int m=s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[m]==target){
            ans = m;
            s=m+1;
        } else if(arr[m]>target){
            e=m-1;
        } else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{10,20,30,30,30,30,40,50};
    int target = 30;

    int first = firstOccurance(arr,target);
    cout <<"The first Occurance of "<<target<<" is "<<first<<endl;
    int last = lastOccurance(arr,target);
    cout <<"The last Occurance of "<<target<<" is "<<last<<endl;

    // // IN-Built functions
    // auto ans1 = lower_bound(arr.begin(),arr.end(),target);
    // cout << "First Occurance: " << ans1-arr.begin() <<endl;

    // auto ans2 = upper_bound(arr.begin(),arr.end(),target);
    // cout << "Last Occurance: " << (ans2-arr.begin()-1) <<endl;

    // Total Occurances
    int Total = last-first+1;
    cout <<"total Occurance is "<<Total<<endl;    

    return 0;
}      
