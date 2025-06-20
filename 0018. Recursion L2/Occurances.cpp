// babbar
// find the occurances of a , using recursion

#include<iostream>
using namespace std;

void occurrence(string name,int size,char target,int index){
    // Base class
    if(index>=size) return; 
    // Processing
    if(name[index]==target) cout << index << " ";
    // RR
    occurrence(name,size,target,index+1);
}

int main(){
    string a = "Shivashant Manohar";
    char target = 'a';
    int index=0;
    //cout << a << endl;
    occurrence(a,a.size(),target,index);
    return 0;
}

