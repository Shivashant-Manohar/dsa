#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
using namespace std;

bool isPossibleSolution(int a[], int n, int k, long long mid)
{
    long long timeSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
            return false;
        if (timeSum + a[i] > mid)
        {
            c++;
            timeSum = a[i];
            if (c > k)
            {
                return false;
            }
        }
        else
        {
            timeSum += a[i];
        }
    }
    return true;
}

long long minTime(int arr[], int n, int k)
{
    long long start = 0;
    long long end = 0;
    for (int i = 0; i < n; i++)
    {
        end += arr[i];
    }
    long long ans = -1;
    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        if (isPossibleSolution(arr, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n = 5, k = 3;
    int arr[] = {5, 10, 30, 20, 15};
    int ans = minTime(arr, n, k);
    cout << ans << endl;
    return 0;
}