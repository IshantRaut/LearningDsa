// This program checks if one string is a rotation of another.
// A rotation means the second string can be obtained by rotating the first string circularly.
// For example, "abc" rotated becomes "bca", "cab", etc.

#include <bits/stdc++.h>  // Includes all standard libraries for convenience in competitive programming
using namespace std;  // Allows use of standard library without std:: prefix

class Solution {
    public:
        // Method to check if 'goal' is a rotation of 's'
        // Returns true if 'goal' can be obtained by rotating 's', false otherwise
        bool rotateString(string& s, string& goal) {
            // If lengths differ, they can't be rotations
            if (s.length() != goal.length()) return false;

            // Concatenate 's' with itself to include all possible rotations as substrings
            string doubledS = s + s;

            // Check if 'goal' is a substring of the doubled string
            // If found, 'goal' is a rotation of 's'
            return doubledS.find(goal) != string::npos;
        }
};

int main() {
    Solution sol;  // Create an instance of the Solution class

    // Test strings: 's' is the original, 'goal' is the potential rotation
    string s = "rotation";
    string goal = "tionrota";  // This is "rotation" rotated left by 4 positions

    // Call the method and print "true" if it's a rotation, "false" otherwise
    cout << (sol.rotateString(s, goal) ? "true" : "false") << endl;

    return 0;  // Indicate successful program execution
}
