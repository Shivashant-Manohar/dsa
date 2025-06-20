/*
https://leetcode.com/problems/sort-colors/

https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&status[]=solved&sortBy=submissions


*/



#include <iostream>
#include <vector>
using namespace std;

void countMethod(vector<int> &nums, int n){
  int zeroCount = 0;
  int oneCount = 0;
  int twoCount = 0;
  
  for(int i=0;i<nums.size();i++){
    if(nums[i]==0){
      zeroCount++;
    } else if(nums[i]==1){
      oneCount++;
    } else{
      twoCount++;
    }
  }
  
  int i = 0;
  while(zeroCount--){
    nums[i]=0;
    i++;
  }
  while(oneCount--){
    nums[i]=1;
    i++;
  }
  while(twoCount--){
    nums[i]=2;
    i++;
  }

}

void threePointerApproach(vector<int> &nums, int n){
  int low = 0;
  int medium = 0;
  int high = n-1;

  while( medium <= high ){
    if(nums[medium]==0){
      swap(nums[medium],nums[low]);
      low++;
      medium++;
    } else if(nums[medium]==1){
      medium++;
    }else {
      swap(nums[medium],nums[high]);  
      high--;    
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin >> nums[i];
  }

  // COUNTING METHOD- Run-time error
  //countMethod(nums,n);

  // OPTIMAL APPROACH - In-Place
  threePointerApproach(nums,n);

  for(auto v: nums){
    cout << v << " ";
  }
  return 0;
}