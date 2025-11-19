#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        // Initialize index, sign, and result
        int i = 0, sign = 1;
         // Use long to handle overflow
        long res = 0;

        // Skip leading whitespaces
        while (i < s.size() && s[i] == ' ') i++;

        // Return 0 if only spaces are found
        if (i == s.size()) return 0;

        // Check for optional '+' or '-' sign
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        // Convert characters to integer while valid digits
        while (i < s.size() && isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');

            // Clamp to INT_MAX if overflow occurs
            if (sign * res > INT_MAX) return INT_MAX;

            // Clamp to INT_MIN if underflow occurs
            if (sign * res < INT_MIN) return INT_MIN;

            i++;
        }

        // Return final result after applying sign
        return (int)(sign * res);
    }
};

int main() {
    Solution sol;

    // string input = "   -42";
    string input ="1337c0d3";

    int result = sol.myAtoi(input);
    cout << "Converted integer: " << result << endl;

    /*
    Dry run for input "1337c0d3":
    - i = 0, sign = 1, res = 0
    - Skip leading whitespaces: s[0]='1' != ' ', no skip, i=0
    - i=0 != s.size() (8)
    - s[0]='1' not '-' or '+', sign remains 1, i=0
    - Loop: i=0 < 8 && isdigit('1'), res = 0*10 + (1-'0') = 1
      - sign*res = 1*1 = 1 <= INT_MAX (2147483647), >= INT_MIN (-2147483648), i=1
    - i=1 < 8 && isdigit('3'), res = 1*10 + (3-'0') = 13
      - 1*13 = 13 <= INT_MAX, >= INT_MIN, i=2
    - i=2 < 8 && isdigit('3'), res = 13*10 + 3 = 133
      - 1*133 = 133 <= INT_MAX, >= INT_MIN, i=3
    - i=3 < 8 && isdigit('7'), res = 133*10 + 7 = 1337
      - 1*1337 = 1337 <= INT_MAX, >= INT_MIN, i=4
    - i=4 < 8 && 'c' not digit, exit loop
    - return (int)(1 * 1337) = 1337

    Dry run for commented input "   -42":
    - i = 0, sign = 1, res = 0
    - Skip leading whitespaces: s[0]=' ', i=1; s[1]=' ', i=2; s[2]=' ', i=3; s[3]='-' != ' ', stop. i=3
    - i=3 != s.size() (6)
    - s[3]='-', sign = -1, i=4
    - Loop: i=4 <6 && isdigit('4'), res = 0*10 + (4-'0') = 4
      - sign*res = -1*4 = -4 <= INT_MAX, >= INT_MIN, i=5
    - i=5 <6 && isdigit('2'), res = 4*10 + 2 = 42
      - -1*42 = -42 <= INT_MAX, >= INT_MIN, i=6
    - i=6 ==6, exit loop
    - return (int)(-1 * 42) = -42
    */

    return 0;
}
