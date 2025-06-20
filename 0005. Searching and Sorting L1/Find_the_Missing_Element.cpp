#include<iostream>
#include<vector>
using namespace std;

int findMissingElement(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int diff = arr[mid]-mid;
        if(diff==1){
            // right me jao
            s=mid+1;
        }else if(diff==2){
            // ans store karo
            // left me jao
            ans=mid;
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }

    if(ans+1==0){
        return arr.size()+1;
    }

    return ans+1;
}

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8};
    int ans = findMissingElement(arr);
    cout <<"Missing element is "<<ans<<endl;
    return 0;
}