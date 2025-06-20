#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // cout << "a = " << a << endl;
    // cout << "adress of a :" << &a << endl;

    // // pointer creation
    // int *ptr = &a;
    // // accessing value stored at adress stored in ptr
    // cout << "Accessing: " << ptr << endl;
    // cout << "Accessing: " << *ptr << endl;
    // cout << &ptr <<endl;

    // // stores same type of data
    // int a=5;
    // int* ptr = &a;
    // cout << sizeof(ptr) <<endl;
    // char ch='k';
    // char* cptr = &ch;
    // cout << sizeof(cptr) <<endl;
    // long lachi=10;
    // long* lptr = &lachi;
    // cout << sizeof(lptr) <<endl;

    // // BAD PRACTICE
    // int* ptr;
    // cout << *ptr <<endl;

    // int a=100;
    // int *ptr = &a;
    // cout << a<<endl;
    // cout <<ptr<<endl;
    // a+=1;
    // *ptr+=1;
    // cout << a<<endl;
    // cout <<ptr<<endl;

    // int a=100;
    // int *ptr = &a;
    // cout << a <<endl;
    // cout << &a <<endl;
    // //cout << *a <<endl;
    // cout <<"*(ptr)++  "<<*ptr<<endl;
    // *(ptr)++;
    // cout <<*ptr<<endl;
    // ++ *(ptr);
    // cout <<"++ *(ptr)  "<<*ptr<<endl;
    // *ptr = *(ptr) /2;
    // cout <<"*ptr = *(ptr) /2  "<<*ptr<<endl;
    // *(ptr) -= 2;
    // cout <<"*(ptr) -= 2  "<<*ptr<<endl;
    // cout << "ans: "<<*ptr <<endl;

    // int a = 5;
    // int *p = &a;
    // cout << p<<endl;
    // p+=1;
    // cout << p<<endl;

    // int arr[5]={10,20,30,40,50};
    // arr = arr+1;

    char ch = 'a';
    char *cptr = &ch;
    cout << cptr <<endl;


    return 0;
}