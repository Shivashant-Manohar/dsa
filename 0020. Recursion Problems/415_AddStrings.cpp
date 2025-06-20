#include <iostream>
#include <vector>
using namespace std;

string addStrings(string num1, string num2, int p1, int p2, int carry)
{

    // Base case: if we've processed all digits and there's no carry left
    if (p1 < 0 && p2 < 0 && carry == 0)
    {
        return "";
    }

    // Processing - Refer notes below

    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    int csum = n1 + n2 + carry; // Current Sum
    int digit = csum % 10;
    carry = csum / 10;

    // Recursive call
    // Get result from recursive call first
    string ans = addStrings(num1, num2, p1 - 1, p2 - 1, carry);
    // Then append the current digit
    ans.push_back(digit + '0');

    return ans;
}

int main()
{
    string Num1 = "12345";
    string Num2 = "14";

    int p1 = Num1.length() - 1;
    int p2 = Num2.length() - 1;

    int carry = 0;

    string ans = addStrings(Num1, Num2, p1, p2, carry);
    cout << ans << endl;

    return 0;
}

/*

In this code, `digit + '0'` is doing the reverse operation of what
we saw in the previous example. Here, it's converting an integer
digit back to its character representation.

Let's break it down:

1. `int digit = csum % 10;` calculates the remainder when `csum` is
divided by 10, giving us the last digit of `csum`.

2. `carry = csum / 10;` sets the carry to the quotient when `csum`
is divided by 10, essentially removing the last digit.

3. `string ans = "";` initializes an empty string.

4. `ans.push_back(digit + '0');` adds a character to the string.

The key part is `digit + '0'`. Since `digit` is an integer (0-9) and
we want to add it to a string, we need to convert it to its
character representation.

In C++, adding the ASCII value of '0' to an integer digit gives
you the ASCII value of the character representation of that digit.

For example:
- If `digit` is 5, then 5 + '0' = '5' (the character)
- If `digit` is 9, then 9 + '0' = '9' (the character)
- If `digit` is 0, then 0 + '0' = '0' (the character)

This technique is the counterpart to the one in your previous example.
Together, they allow for conversion between character digits and integer values,
which is essential when performing arithmetic on
large numbers represented as strings.

*/



/*

The answer lies in how recursion works with string concatenation in your code. Let me explain why the output is reversed in the LeetCode solution but correct in your VS Code implementation.

When you run this:
```cpp
string ans = "";
ans.push_back(digit + '0');
ans += addStrings(num1, num2, p1 - 1, p2 - 1, carry);
```

Here's what happens:
1. You create an empty string `ans`
2. You add the current digit to the front of `ans`
3. You append the result of the recursive call to `ans`

This means the most significant digits (processed last in recursion) get appended at the end. 

Let's trace it with "12" + "34":
- Start with p1=1, p2=1
- Process digit: 2+4=6, append '6'
- Recursively call with p1=0, p2=0
  - Process digit: 1+3=4, append '4'
  - Recursively call with p1=-1, p2=-1 (base case)
    - Return ""
  - Append "" to "4", return "4"
- Append "4" to "6", return "64"

The final result is "64", which is reversed.

**So why is it working correctly in your VS Code example?**

In your VS Code implementation, the output appears correct because you're printing it as is - and if the expected output of "12345" + "3214" is "15559", then your recursive function must be reversing the digits during its execution, which coincidentally matches the expected result.

If you were to add two palindrome numbers like "121" + "222" = "343", then you might not notice the reversal.

To fix the LeetCode solution properly, either:

1. Reverse the final answer before returning:
```cpp
string addStrings(string num1, string num2) {
    string result = RecursionAddStrings(num1, num2, num1.length()-1, num2.length()-1, 0);
    reverse(result.begin(), result.end());
    return result;
}
```

2. Or change the order of operations in your recursive function:
```cpp
string RecursionAddStrings(string num1, string num2, int p1, int p2, int carry) {
    // Base case
    if(p1 < 0 && p2 < 0 && carry == 0) {
        return "";
    }
    
    // Processing
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    
    int cSum = n1 + n2 + carry;
    int digit = cSum % 10;
    carry = cSum / 10;
    
    // Get result from recursive call first
    string ans = RecursionAddStrings(num1, num2, p1-1, p2-1, carry);
    // Then append the current digit
    ans.push_back(digit + '0');
    
    return ans;
}
```

This second approach will build the result with the most significant digits first (from the deepest recursion) and then append the less significant digits as the recursion unwinds.

*/