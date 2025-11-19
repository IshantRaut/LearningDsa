#include <bits/stdc++.h>
using namespace std;

// Function to count substrings with at most k distinct characters
int atMostKDistinct(string s, int k) {
    // 'left' is the starting pointer of our sliding window.
    // 'res' will store the total count of valid substrings.
    int left = 0, res = 0;
    // 'freq' is a hash map to store the frequency of characters inside the current window.
    unordered_map<char, int> freq;
 
    // Iterate through the string with the 'right' pointer, expanding the window.
    for (int right = 0; right < s.size(); right++) {
        // Increment the frequency of the character at the right pointer.
        freq[s[right]]++;
 
        // This loop shrinks the window from the left side if the number of distinct characters
        // (which is the size of our frequency map) exceeds k.
        while (freq.size() > k) {
            // Decrement the frequency of the character at the left pointer.
            freq[s[left]]--;
            // If the frequency of the character at the left pointer becomes 0,
            // it means it's no longer in our window, so we erase it from the map.
            if (freq[s[left]] == 0) freq.erase(s[left]);
            // Move the left pointer one step to the right to shrink the window.
            left++;
        }
 
        // For a valid window (from 'left' to 'right'), all substrings ending at 'right' are also valid.
        // The number of such substrings is the size of the current window (right - left + 1).
        // We add this count to our result.
        res += (right - left + 1);
    }
    // Return the total count of substrings with at most k distinct characters.
    return res;
}

// Function to count substrings with exactly k distinct characters
int countSubstrings(string s, int k) {
    // The number of substrings with exactly k distinct characters is equal to
    // (number of substrings with at most k) - (number of substrings with at most k-1).
    // This is a common and efficient combinatorial technique.
    return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
}

int main() {
    // Sample test
    string s = "pqpqs";
    int k = 2;

    // Call the function and output the result.
    // For s="pqpqs", k=2:
    // atMostKDistinct(s, 2) returns 12
    // atMostKDistinct(s, 1) returns 5
    // The result is 12 - 5 = 7.
    cout << "Count: " << countSubstrings(s, k) << endl; // Output: 7
    return 0;
}