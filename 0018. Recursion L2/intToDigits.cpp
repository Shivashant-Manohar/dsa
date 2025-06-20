#include <iostream>
using namespace std;

void printDigits(int n)
{
    // Base case
    if (n == 0)
        return;

    // Processing
    int digit = n % 10;
    //cout << digit << " ";

    // Recursive call
    printDigits(n/10);

    cout << digit << " ";
}

int main()
{
    int n = 1818;
    printDigits(n);
    return 0;
}
