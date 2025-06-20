#include<iostream>
#include<vector>
using namespace std;
void seperate(vector<int> &a, int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(a[low]<0){
            low++;
        }
        else if(a[high]>0){
            high--;
        }
        else{
            swap(a[high],a[low]);
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }   
    seperate(a,n); 
    for(auto v: a){
        cout << v <<" ";
    }
}