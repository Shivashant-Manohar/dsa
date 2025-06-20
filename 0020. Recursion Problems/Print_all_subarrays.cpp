#include <iostream>
#include <vector>
using namespace std;

void subArrays_util(vector<int> &arr, int start, int end)
{
    // Base case
    if (end >= arr.size())
        return;

    // Processing
    for (int j = start; j <= end; ++j)
    {
        cout << arr[j] <<" ";
    }
    cout << endl;

    // Recursive case
    return subArrays_util(arr, start, end + 1);
}

void subArrays(vector<int> &arr)
{
    for (int start = 0; start < arr.size(); start++)
    {
        subArrays_util(arr,start,start);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    subArrays(arr);

    return 0;
}