#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    // This function modifies the input matrix such that if an element is 0, its entire row and column are set to 0.

    // int row[n] = {0}; --> matrix[..][0]
    // int col[m] = {0}; --> matrix[0][..]

    int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    // Iterate through each element of the matrix.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // If the current element is 0, we need to mark its row and column.
            if (matrix[i][j] == 0) {
                // mark i-th row:
                // Set the first element of the i-th row to 0. This indicates that the entire row should be 0.
                matrix[i][0] = 0;

                // mark j-th column:
                // If the current element is not in the first column
                if (j != 0)
                // Set the first element of the j-th column to 0. This indicates that the entire column should be 0.
                    matrix[0][j] = 0;
                else
                // If the current element is in the first column, set col0 to 0. This indicates that the entire first column should be 0.
                    col0 = 0;
            }
        }
    }

    /*
    Dry run for the first loop:
    matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}
    n = 3, m = 3, col0 = 1

    i = 0, j = 0, matrix[0][0] = 1 != 0
    i = 0, j = 1, matrix[0][1] = 1 != 0
    i = 0, j = 2, matrix[0][2] = 1 != 0
    i = 1, j = 0, matrix[1][0] = 1 != 0
    i = 1, j = 1, matrix[1][1] = 0 == 0, matrix[1][0] = 0, matrix[0][1] = 0
    i = 1, j = 2, matrix[1][2] = 1 != 0
    i = 2, j = 0, matrix[2][0] = 1 != 0
    i = 2, j = 1, matrix[2][1] = 1 != 0
    i = 2, j = 2, matrix[2][2] = 1 != 0

    After the first loop:
    matrix = {{1, 0, 1}, {0, 0, 1}, {1, 1, 1}}, col0 = 1
    */

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    // Iterate through the matrix, starting from the second row and second column.
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            // If the current element is not 0
            if (matrix[i][j] != 0) {
                // check for col & row:
                // If the first element of the i-th row or the first element of the j-th column is 0, set the current element to 0.
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
    /*
    Dry run for the second loop:
    matrix = {{1, 0, 1}, {0, 0, 1}, {1, 1, 1}}, col0 = 1

    i = 1, j = 1, matrix[1][1] = 0 != 0 is false
    i = 1, j = 2, matrix[1][2] = 1 != 0 is true, matrix[1][0] = 0 == 0 is true, matrix[1][2] = 0
    i = 2, j = 1, matrix[2][1] = 1 != 0 is true, matrix[2][1] = 0 == 0 is true, matrix[2][1] = 0
    i = 2, j = 2, matrix[2][2] = 1 != 0 is true, matrix[2][0] = 1 == 0 is false, matrix[0][2] = 1 == 0 is false

    After the second loop:
    matrix = {{1, 0, 1}, {0, 0, 0}, {1, 0, 1}}, col0 = 1
    */

    //step 3: Finally mark the 1st col & then 1st row:
    // Step 3: Mark the first row
    if (matrix[0][0] == 0) for (int j = 0; j < m; j++) matrix[0][j] = 0;
    // Step 4: Mark the first column
    if (col0 == 0) for (int i = 0; i < n; i++) matrix[i][0] = 0;

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    // Get the number of rows in the matrix.
    int n = matrix.size();
    // Get the number of columns in the matrix.
    int m = matrix[0].size();
    // Call the zeroMatrix function to modify the matrix.
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: n";
    // Print the modified matrix.
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    // Return 0 to indicate successful execution.
    return 0;
}
