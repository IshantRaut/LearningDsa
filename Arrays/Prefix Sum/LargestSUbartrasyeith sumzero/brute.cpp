// Include all standard C++ libraries. A common practice in competitive programming for convenience.
#include <bits/stdc++.h>
// Use the standard namespace to avoid writing std:: before every standard library element.
using namespace std;

// This function takes a vector of integers and returns the length of the longest subarray with a sum of 0.
int solve(vector<int>& a) {
    // 'maxLen' will store the maximum length of the subarray found so far. Initialize to 0.
    int maxLen = 0;
    // 'sumIndexMap' is a hash map to store the first index at which a particular cumulative sum occurs.
    // Key: cumulative sum, Value: index.
    unordered_map<int, int> sumIndexMap;
    // 'sum' will store the cumulative sum of elements as we iterate through the array.
    int sum = 0;

    // Loop through each element of the input vector 'a'.
    for (int i = 0; i < a.size(); i++) {
        // Add the current element to the cumulative sum.
        sum += a[i];

        // --- Dry Run Step-by-step ---
        // i=0, a[0]=9:  sum = 9. Not 0. Map is empty. map[9] = 0.
        // i=1, a[1]=-3: sum = 9 + (-3) = 6. Not 0. Map doesn't have 6. map[6] = 1.
        // i=2, a[2]=3:  sum = 6 + 3 = 9. Not 0. Map has 9 (at index 0).
        //              This means subarray from index 1 to 2 sums to 0.
        //              Length = i - map[9] = 2 - 0 = 2. maxLen = max(0, 2) = 2.
        // i=3, a[3]=-1: sum = 9 + (-1) = 8. Not 0. Map doesn't have 8. map[8] = 3.
        // i=4, a[4]=6:  sum = 8 + 6 = 14. Not 0. Map doesn't have 14. map[14] = 4.
        // i=5, a[5]=-5: sum = 14 + (-5) = 9. Not 0. Map has 9 (at index 0).
        //              This means subarray from index 1 to 5 sums to 0.
        //              Length = i - map[9] = 5 - 0 = 5. maxLen = max(2, 5) = 5.

        // If the cumulative sum is 0, it means the subarray from the beginning (index 0) to the current index 'i' has a sum of 0.
        if (sum == 0) {
            // The length of this subarray is i + 1.
            maxLen = i + 1;
        }
        // If the current cumulative sum has been seen before...
        else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
            // ...it means the subarray between the previous occurrence of this sum and the current index 'i' has a sum of 0.
            // For example, if sum up to index 'j' is S, and sum up to index 'i' is also S, then sum of elements from 'j+1' to 'i' is 0.
            // The length of this subarray is 'i - sumIndexMap[sum]'.
            // We update maxLen if this new length is greater.
            maxLen = max(maxLen, i - sumIndexMap[sum]);
        }
        // If the cumulative sum is encountered for the first time...
        else {
            // ...store this sum and its index in the map.
            sumIndexMap[sum] = i;
        }
    }
    // After checking all elements, return the maximum length found.
    return maxLen;
}

int main() {
    // Define a sample input vector.
    vector<int> a = {9, -3, 3, -1, 6, -5};
    // Call the solve function and print the result to the console. Expected output: 5
    cout << solve(a) << endl;

    return 0;
}