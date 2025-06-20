#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int negativeMarking(vector<int> nums){
    int ans = -1;
    for(int i=0;i<nums.size();i++){
        int index = nums[i];
        if(nums[index]<0){
            ans = index;
            break;
        }
        nums[index] *= -1;
    }
    return abs(ans);
}

int sortingMethod(vector<int> nums){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            return nums[i];
        }
    }    
}

int optimal(vector<int> nums){
    while(nums[0] != nums[nums[0]] ){
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
}


int main(){
    vector<int> nums{1,3,4,2,2};
    //int ans = negativeMarking(nums);
    //int ans = sortingMethod(nums);
    int ans = optimal(nums);
    cout << "Duplicate number: " <<ans << endl;
    return 0;
}


/*
https://leetcode.com/problems/find-the-duplicate-number/
*/


