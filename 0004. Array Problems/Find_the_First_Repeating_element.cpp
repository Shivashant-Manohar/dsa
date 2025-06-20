#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool MethodOne(vector<int> a, int n){
    for(int i=0;i<n;i++){
        bool isRepeated = false;
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
                isRepeated = true;
                return i+1;
            }
        }
    }
    return -1;
}

int optimised(vector<int> a, int n){
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]>1){
            return i+1;
        }
    }
    return -1;
}

int main(){
    vector<int> a{1,5,3,4,3,5,6};
    int n = a.size();
    //MethodOne(a,n);
    int ans = optimised(a,n);
    cout << ans << endl;
    return 0;    
}