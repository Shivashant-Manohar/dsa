#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // For accumulate function
using namespace std;

int isPossibleSolution(int A[], int N, int M, int sol /*mid*/)
{
    int pageSum = 0;
    int count = 1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > sol)
            return false;
        if (pageSum + A[i] > sol)
        {
            count++;
            pageSum = A[i];
            if (count > M)
            {
                return false;
            }
        }
        else
        {
            pageSum += A[i];
        }
    }
    return true;
}

int FindPages(int A[], int N, int M)
{
    if (M > N)
        return -1;
    int start = 0;
    int end = accumulate(A, A + N, 0); // used to find the total max sum
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(A, N, M, mid))
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
    int A[] = {12, 34, 67, 90};
    int M = 2;
    int N = 4;
    int Ans = FindPages(A, N, M);
    cout << Ans << endl;
    return 0;
}