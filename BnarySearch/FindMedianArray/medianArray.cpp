#include <bits/stdc++.h>
using namespace std;

// Important points:
// 1. The core idea is to partition both arrays such that the elements to the left of the partition are less than or equal to the elements to the right.
// 2. We perform binary search on the smaller array to find the optimal partition point. This minimizes the search space.
// 3. The total number of elements in the left half of the merged array should be (n1 + n2 + 1) / 2.
// 4. Edge cases for `l1`, `l2`, `r1`, `r2` are handled using `INT_MIN` and `INT_MAX` to simplify comparisons.
class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        // Ensure a is the smaller array to minimize binary search scope
        if (a.size() > b.size()) return findMedianSortedArrays(b, a);

        int n1 = a.size(), n2 = b.size();
        int low = 0, high = n1;

        // Dry Run Example: a = {1, 3}, b = {2}
        // n1 = 2, n2 = 1. Swapped, so a = {2}, b = {1, 3} (for internal logic, but original a, b are used for clarity)
        // Let's use original: a = {1, 3}, b = {2}. n1 = 2, n2 = 1.

        // Binary search on the smaller array
        while (low <= high) {
            // Calculate the cut positions for both arrays
            int cut1 = (low + high) / 2;
            int cut2 = (n1 + n2 + 1) / 2 - cut1;

            // Handle boundary elements using INT_MIN and INT_MAX
            // cut1: partition point in array 'a'. Elements a[0]...a[cut1-1] are in the left part.
            // cut2: partition point in array 'b'. Elements b[0]...b[cut2-1] are in the left part.
            // (n1 + n2 + 1) / 2 ensures that for odd total length, the median element is in the left half.

            int l1 = (cut1 == 0) ? INT_MIN : a[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : b[cut2 - 1];
            int r1 = (cut1 == n1) ? INT_MAX : a[cut1];
            int r2 = (cut2 == n2) ? INT_MAX : b[cut2];

            // If correct partition is found
            if (l1 <= r2 && l2 <= r1) {
                // This condition means we have found a valid partition:
                // All elements in the left part (l1, l2) are less than or equal to
                // all elements in the right part (r1, r2).

                // Total even => average of max left and min right
                if ((n1 + n2) % 2 == 0) {
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                }
                else {
                    // Total odd => max of left half
                    return max(l1, l2);
                }
            }
            else if (l1 > r2) {
                // Shift left in a
                // This means l1 is too large, so we need to move the cut in 'a' to the left.
                // The elements in the left part of 'a' are too big, so we reduce `cut1`.
                high = cut1 - 1;
            }
            else {
                // Shift right in a
                // This means l2 is too large (or r1 is too small), so we need to move the cut in 'a' to the right.
                // The elements in the left part of 'a' are too small, so we increase `cut1`.
                low = cut1 + 1;
            }

            // Dry Run (a = {1, 3}, b = {2}):
            // n1 = 2, n2 = 1. Total = 3. (n1 + n2 + 1) / 2 = (2 + 1 + 1) / 2 = 2.

            // Iteration 1: low = 0, high = 2
            // cut1 = (0 + 2) / 2 = 1
            // cut2 = 2 - cut1 = 2 - 1 = 1
            // l1 = a[cut1-1] = a[0] = 1
            // l2 = b[cut2-1] = b[0] = 2
            // r1 = a[cut1] = a[1] = 3
            // r2 = b[cut2] = (cut2 == n2) ? INT_MAX : b[cut2] = (1 == 1) ? INT_MAX : b[1] = INT_MAX

            // Check condition: l1 <= r2 (1 <= INT_MAX) -> true
            // Check condition: l2 <= r1 (2 <= 3) -> true
            // Both conditions are true! Correct partition found.

            // Total (n1 + n2) = 3 (odd)
            // Return max(l1, l2) = max(1, 2) = 2.0
        }

        return 0.0;
    }
};

int main() {
    Solution sol;
    vector<int> a = {1, 3};
    vector<int> b = {2};
    cout << "Median is: " << sol.findMedianSortedArrays(a, b) << endl;
    return 0;
}