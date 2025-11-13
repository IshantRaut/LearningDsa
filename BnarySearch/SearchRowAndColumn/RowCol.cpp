// This program searches for a target element in a 2D matrix sorted row-wise and column-wise.
// Logic: Start from the top-right corner. If current element == target, found.
// If current < target, move down (row increases). If current > target, move left (col decreases).
// This efficiently narrows down the search space.
// DRY Principle: Single function encapsulates the search logic without repetition.

#include <bits/stdc++.h>
using namespace std;

// searchElement function: Searches for target in a sorted 2D matrix.
// Assumption: Matrix is sorted in increasing order both row-wise and column-wise.
// Logic: Use top-right as starting point, eliminate rows or columns based on comparison.
bool searchElement(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int row = 0, col = m - 1;  // Start at top-right corner

    while (row < n && col >= 0) {
        if (matrix[row][col] == target) {
            return true;  // Found the target
        } else if (matrix[row][col] < target) {
            row++;  // Target is larger, move down to next row
        } else {
            col--;  // Target is smaller, move left to previous column
        }
    }
    return false;  // Target not found
}

int main()
{
    // Example matrix: sorted row-wise and column-wise
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    // Search for 8, which is present
    searchElement(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}
