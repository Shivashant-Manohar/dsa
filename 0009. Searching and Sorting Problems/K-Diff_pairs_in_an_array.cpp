#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// Two Pointer Approach
int twoPointer(vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    set<pair<int, int>> ans;
    int i = 0, j = 1;
    while (j < arr.size())
    {
        int diff = arr[j] - arr[i];
        if (diff == k)
        {
            ans.insert({arr[i], arr[j]});
            ++i, ++j;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j)
        {
            j++;
        }
    }
    return ans.size();
}


// Two Pointer + Binary Search Approach
bool BinarySearch(vector<int>&arr,int s,int e,int x){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==x){
            return true;
        } else if(arr[mid]>x){
            e=mid-1;
        } else{
            s=mid+1;
        }
    }
    return false;
}
int twoPtrBinarySearch(vector<int> &arr, int k){
    sort(arr.begin(),arr.end());
    set<pair<int,int>>ans;
    for(int i=0;i<arr.size();i++){
        if(BinarySearch(arr,i+1,arr.size()-1,arr[i]+k)){
            ans.insert({arr[i],arr[i]+k});
        } 
    }
    return ans.size();
}

int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int k = 2;
    //int ans = twoPointer(arr, k);
    int ans = twoPtrBinarySearch(arr, k);
    cout << ans << endl;
    cout << sizeof(int)<<endl;
    return 0;
}