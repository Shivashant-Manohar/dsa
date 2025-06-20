#include<iostream>
using namespace std;

bool isIsomorphic(string s, string t){
    int hash[256]={0};
    bool isTcharMapped[256]={0};
    for(int i=0;i<s.size();++i){
        if(hash[s[i]]==0 && isTcharMapped[t[i]]==0){
            hash[s[i]]=t[i];
            isTcharMapped[t[i]]=true;
        }
    }
    for(int i=0;i<s.size();++i){
        if(char(hash[s[i]]) != t[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "egg";
    string t = "add";
    cout << isIsomorphic(s,t)<<endl;
    return 0;
}