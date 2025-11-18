#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Custom comparator: sort by frequency descending, then by character ascending
    static bool comparator(pair<int, char> p1, pair<int, char> p2) {
        if (p1.first > p2.first) return true;
        if (p1.first < p2.first) return false;
        return p1.second < p2.second;
    }

public:
    vector<char> frequencySort(string& s) {
        // Array to store frequency and character
        pair<int, char> freq[26];
        
        // Initialize frequency array with character labels
        for (int i = 0; i < 26; i++) {
            freq[i] = {0, i + 'a'};
        }

        // Count frequency of each character in string
        for (char ch : s) {
            freq[ch - 'a'].first++;
        }

        // Sort the frequency array using the custom comparator
        sort(freq, freq + 26, comparator);

        // Store characters with non-zero frequency
        vector<char> ans;
        for (int i = 0; i < 26; i++) {
            if (freq[i].first > 0) ans.push_back(freq[i].second);
        }

        // Return the result
        return ans;
    }
};

/*
Dry run for s = "tree"

freq array initialized:
freq[0] = {0, 'a'}, freq[1] = {0, 'b'}, ..., freq[25] = {0, 'z'}

Counting frequencies:
't' (index 19): freq[19].first = 1
'r' (index 17): freq[17].first = 1
'e' (index 4): freq[4].first = 1
'e' (index 4): freq[4].first = 2

Sorting freq using comparator (frequency descending, then character ascending):
After sort: freq[4] = {2, 'e'}, freq[17] = {1, 'r'}, freq[19] = {1, 't'}, others unchanged

Building ans vector:
i=0: freq[0].first=0, skip
...
i=4: freq[4].first=2 >0, ans.push_back('e')
...
i=17: freq[17].first=1 >0, ans.push_back('r')
...
i=19: freq[19].first=1 >0, ans.push_back('t')
...
ans = ['e', 'r', 't']

Output: e r t
*/

// Main function to test the logic
int main() {
    Solution sol;
    
    // Example input string
    string s = "tree";

    // Get the sorted characters by frequency
    vector<char> result = sol.frequencySort(s);

    // Print the result
    for (char c : result) {
        cout << c << " ";
    }

    return 0;
}
