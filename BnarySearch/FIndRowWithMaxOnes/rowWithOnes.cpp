// This program finds the row with the maximum number of 1's in a binary matrix.
// Assumption: Each row is sorted with 0's followed by 1's.
// Logic: For each row, use binary search (lowerBound) to find the index of the first 1.
// Number of 1's = total columns - index of first 1.
// Track the row with the highest count.
// DRY Principle: Reusable lowerBound function avoids repeating binary search logic.

#include <bits/stdc++.h>
using namespace std;

// lowerBound function: Implements binary search to find the smallest index where arr[mid] >= x.
// This is efficient for finding the first occurrence in a sorted array.
// DRY: This function encapsulates the binary search logic, making it reusable.
int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // If arr[mid] >= x, it could be an answer, update ans and search left for smaller index
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

// rowWithMax1s function: Iterates through each row, calculates number of 1's using lowerBound,
// and keeps track of the row with the maximum count.
// Logic: Assumes rows are sorted (0's then 1's), so lowerBound finds first 1, count = m - index.
// DRY: Uses the lowerBound function instead of implementing binary search inline.
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int cnt_max = 0;
    int index = -1;

    //traverse the rows:
    for (int i = 0; i < n; i++) {
        // get the number of 1's: since sorted, first 1 at lowerBound, so count = m - lowerBound
        int cnt_ones = m - lowerBound(matrix[i], m, 1);
        if (cnt_ones > cnt_max) {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main()
{
    // Example matrix: row 0 has 3 ones, row 1 has 1 one, row 2 has 0 ones. So max is row 0.
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " <<
         rowWithMax1s(matrix, n, m) << '\n';
}
