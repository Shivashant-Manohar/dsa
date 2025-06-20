/*
https://practice.geeksforgeeks.org/problems/common-elements1132/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
*/


#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){

    vector<int> a {1,5,10,20,40,80};
    int n1 = 6;
    vector<int> b {6,7,20,80,100};
    int n2 = 5;
    vector<int> c {3,4,15,20,30,70,80,120};
    int n3 = 8;

    // METHOD ONE
    // WE CANT USE THIS BECAUSE QUESTION STATES
    // NOT TO USE ANY EXTRA DATA STRUCTURE
    vector<int> ans;
    set<int> st;
    int i,j,k; i=j=k=0;
    while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j] && b[j]==c[k]){
            st.insert(a[i]);
            i++,j++,k++;
        } else if (a[i]<b[j]){
            i++;
        } else if (b[j]<c[k]){
            j++;
        } else{
            k++;    
        }
    }
    for( auto i: st){
        ans.push_back(i);
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] <<" ";
    }
}