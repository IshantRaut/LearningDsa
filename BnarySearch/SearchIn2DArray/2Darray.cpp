// This program searches for a target element in a 2D matrix using binary search.
// Assumption: Matrix is sorted in row-major order (increasing across rows and columns).
// Logic: Treat the 2D matrix as a 1D array of size n*m. Perform binary search by calculating row and col from mid index.
// DRY Principle: Single function encapsulates the search logic without repetition.

#include <bits/stdc++.h>
using namespace std;

// searchMatrix function: Searches for target in a sorted 2D matrix using binary search.
// Logic: Flatten the matrix virtually, use mid to access elements via row = mid / m, col = mid % m.
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m, col = mid % m;  // Calculate row and column from mid index
        if (matrix[row][col] == target) {
            return true;  // Found the target
        } else if (matrix[row][col] < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }
    return false;  // Target not found
}

int main()
{
    // Example matrix: sorted in row-major order
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // Search for 8, which is present
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}
