#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        // Get the length of the string.
        int n = s.length();
        // Initialize the total sum of beauties to 0.
        int sum = 0;

        // The outer loop sets the starting character of the substring.
        for (int i = 0; i < n; i++) {
            // A frequency map to store character counts for substrings starting at 'i'.
            // It's reset for each new starting position.
            unordered_map<char, int> freq;

            // The inner loop extends the substring to the right, one character at a time.
            for (int j = i; j < n; j++) {
                // For the current substring s[i..j], update the frequency of the new character s[j].
                freq[s[j]]++;

                // Initialize variables to find the max and min frequencies in the current substring.
                int maxi = INT_MIN;
                int mini = INT_MAX;

                // Iterate through the frequency map to find the most and least frequent characters.
                for (auto it : freq) {
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }

                // Calculate the beauty of the current substring (s[i..j]) and add it to the total sum.
                sum += (maxi - mini);
            }
        }

        // Return the accumulated sum of beauties of all substrings.
        return sum;
    }
};

int main() {
    Solution sol;
    string s = "abac"; // Using "abac" as an example which gives a non-trivial sum.
    // For s="abac", substrings with beauty > 0 are "aba"(1), "abac"(1), "aca"(1). Total sum = 3.
    // For s="xyx", the only substring with beauty > 0 is "xyx" itself (max=2, min=1), so sum = 1.
    cout << "Beauty Sum: " << sol.beautySum(s) << endl; // Output for "abac" is 3.
    return 0;
}