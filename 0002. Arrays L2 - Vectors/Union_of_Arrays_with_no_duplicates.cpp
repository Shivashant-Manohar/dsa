#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a; 
    cout << "Size of First array: " ;
    cin >> a;
    vector<int> arr(a);
    cout <<"Elements of First array: ";
    for(int i = 0; i < a; i++){
            cin >> arr[i];
    }
    int b;
    cout << "Size of Second array: ";
    cin >> b;
    vector<int> brr(b);
    cout <<"Elements of Second array: ";
    for(int i = 0; i < b; i++){
            cin >> brr[i];
    }
    
    vector<int> crr;
    for(int i = 0; i<a ; i++){
        crr.push_back(arr[i]);     
    }

    for(int i = 0; i < b; i++){
        crr.push_back(brr[i]);
    }

    cout <<"Union Array: ";
    for(int i = 0; i < crr.size(); i++){
        cout << crr[i] << " ";
    }
    return 0;
}
