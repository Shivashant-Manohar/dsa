#include <iostream>
using namespace std;

bool sorted(int arr[], int size, int index)
{
    if (index >= size)
        return true;

    if (arr[index] <= arr[size - 1])
        sorted(arr, size, index + 1);
    else
        return false;
}

int main()
{
    int arr[5] = {90, 20, 30, 40, 50};
    if (sorted(arr, 5, 0))
        cout << "Sorted array" << endl;
    else
        cout << "Unsorted array" << endl;

    return 0;
}