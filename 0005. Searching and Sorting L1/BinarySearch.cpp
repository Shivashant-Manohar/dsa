#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarysearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // search left side
            end = mid - 1;
        }
        else
        {
            // search right side
            start = mid + 1;
        }
        // updation of mid
        mid = start + (end - start) / 2;
    }
    // element not found
    return -1;
}

int main()
{

    // int arr[] = {2, 4, 6, 8, 10, 12, 16};
    // int size = 7;
    // int target = 10;

    // int indexoftarget = binarysearch(arr, size, target);

    // if (indexoftarget == -1)
    // {
    //     cout << "Target not found " << endl;
    // }
    // else
    // {
    //     cout << "Target found at " << indexoftarget << " index" << endl;
    // }

    // vector<int> v{1,3,5,7,9,13,15,16,19};
    // if(binary_search(v.begin(),v.end(),15)){
    //     cout <<"Found"<<endl;
    // }else {
    //     cout <<"Not Found"<<endl;
    // }

    int arr[] = {1, 3, 5, 7, 9, 13, 15, 16, 19};
    int size = 9;
    if (binary_search(arr, arr + size, 15))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}