#include <iostream>
#include <vector>
using namespace std;

int getQuotient(int divisor, int dividend)
{
    int s = 0;
    int e = dividend;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int divisor = 31;
    int dividend = 299;

    int ans = getQuotient(abs(divisor), abs(dividend));
    cout <<"ans: "<<ans<<endl;

    double step = 0.1;
    double finalAns = ans ;
    int precision = 3;
    for(int i=1;i<=precision;i++){
        for(double j=finalAns;j*abs(divisor)<=abs(dividend);j+=step){
            finalAns = j;
        }
        step=step/10;
    }

    if ((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0))
    {
        finalAns *= 1;
    }
    else
    {
        finalAns = 0 - finalAns;
    }

    cout << "Final ans is: " << finalAns << endl;
    return 0;
}
