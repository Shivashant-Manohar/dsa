#include<iostream>
#include<vector>
using namespace std;
int visitingMethod(vector<int> nums){
    for(int i=0;i<nums.size();i++){
        int index = abs(nums[i]);
        if(nums[index-1]>0){
            // MARK IT VISITED
            nums[index-1] *= -1;
        }
    }
    //TRANSVERSE THE ARRAY AND PRINT INDEX+1 FOR ALL +VE ELEMENTS
    cout <<"Missing Elements are: ";
    for(int i = 0;i<nums.size();i++){
        if(nums[i] > 0){
            cout<<(i+1)<<" ";
        }
    }
}
int SwappingSorting(vector<int>a){
    int n = a.size();
    int i=0;
    while(i<n){
        int index = a[i]-1;
        if(a[i] != a[index]){
            swap(a[i],a[index]);
        } else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            cout << "Missing Element is: " << i+1 << " ";
        }
    }
}
int main(){
    vector<int> nums{1,3,5,3,4};
    //visitingMethod(nums);
    //SwappingSorting(nums);
    return 0;        
}


