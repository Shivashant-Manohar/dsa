#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoPtrMethod(vector<int> arr, int k, int x)
{
    int l = 0, h = arr.size() - 1;
    while ((h - l) >= k)
    {
        if (x - arr[l] > arr[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
}

int lowerBound(vector<int> arr, int x)
{
    int s = 0, e = arr.size() - 1;
    int ans = e;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (x > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

vector<int> BS_and_twoPtr(vector<int> arr, int k, int x)
{
    // lower  bound
    int h = lowerBound(arr, x);
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
        {
            h++;
        }
        else if (h >= arr.size())
        {
            l--;
        }
        else if (x - arr[l] > arr[h] - x)
        {
            h++;
        }
        else
        {
            l--;
        }
    }
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    // return twoPtrMethod(arr,k,x);
    return BS_and_twoPtr(arr, k, x);
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int k = 4, x = 3;
    vector<int> ans = findClosestElements(arr, k, x);
    for (int i = 0; i < ans.size(); i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}