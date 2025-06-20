#include <iostream>   // std::cout
#include <vector>     // std::vector
#include <algorithm>  // std::lower_bound, std::upper_bound, std::sort
using namespace std;
int firstOccurance(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (v[mid] == target)
        {
            // store ans and go left
            ans = mid;
            e = mid - 1;
        }
        else if (target > v[mid])
        {
            s = mid + 1;
        }
        else if (target < v[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;

    cout << endl;

    int indexoffirstOcc = firstOccurance(v, target);
    cout << "ans is " << indexoffirstOcc << endl;

    auto ans2 = lower_bound(v.begin(),v.end(),target);
    cout << "ans by Lower bound function is " << ans2-v.begin() << endl;

    cout << endl;
    return 0;
}