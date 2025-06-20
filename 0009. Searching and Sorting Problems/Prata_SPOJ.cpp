#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> ranks, int p, int mid)
{
    int currentPrata = 0; // initially cooked prata count
    for (int i = 0; i < ranks.size(); i++)
    {
        int Rank = ranks[i];
        int j = 1;
        int TimeTaken = 0;
        while (true)
        {
            if (TimeTaken * Rank <= mid)
            {
                currentPrata++;
                TimeTaken += j * Rank;
                j++;
            }
            else
            {
                break;
            }
        }
        if (currentPrata >= p)
        {
            return true;
        }
    }
    return false;
}

int minTime(vector<int> ranks, int p)
{
    int start = 0;
    int highestRank = *max_element(ranks.begin(), ranks.end());
    // for (int i = 1; i <= p; i++)
    // {
    //     end = end + maxRank * i;
    // }
    int end = highestRank * (p * (p + 1) / 2);
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(ranks, p, mid))
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
    int T;
    cin >> T; // number of testcases
    while (T--)
    {
        int p, c;
        cin >> p >> c;
        vector<int> ranks;
        while (c--)
        {
            int r;
            cin >> r;
            ranks.push_back(r);
        }
        cout << "Ans"<<T-1<<": "<<minTime(ranks, p)<<endl;;
    }
    return 0;
}