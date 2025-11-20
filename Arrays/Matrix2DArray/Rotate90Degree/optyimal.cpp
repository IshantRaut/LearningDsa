
#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>> &matrix){
    // Get the size of the matrix (assuming it's a square N x N matrix)
    int n = matrix.size();
    
    // Step 1: Transpose the matrix
    // The outer loop iterates through rows.
    for(int i=0;i<n;i++){
        // The inner loop iterates through columns, but only up to the current row index 'i'.
        // This is because we only need to swap the upper triangle of the matrix with the lower triangle.
        // For example, we swap matrix[i][j] with matrix[j][i]. If we looped j to n, we'd swap them back.
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    /*
    Dry Run: Transposing the matrix
    Initial matrix 'arr':
    1 2 3
    4 5 6
    7 8 9

    i = 0: j loop does not run (j < 0 is false).
    i = 1: j = 0. swap(matrix[1][0], matrix[0][1]) -> swap(4, 2).
       Matrix becomes:
       1 4 3
       2 5 6
       7 8 9
    i = 2:
      j = 0: swap(matrix[2][0], matrix[0][2]) -> swap(7, 3).
         Matrix becomes:
         1 4 7
         2 5 6
         3 8 9
      j = 1: swap(matrix[2][1], matrix[1][2]) -> swap(8, 6).
         Matrix becomes:
         1 4 7
         2 5 8
         3 6 9

    After transposing, the matrix is:
    1 4 7
    2 5 8
    3 6 9
    */

    // Step 2: Reverse each row of the transposed matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }

    /*
    Dry Run: Reversing each row
    Transposed Matrix:
    1 4 7
    2 5 8
    3 6 9

    i = 0: reverse row 0 -> [1, 4, 7] becomes [7, 4, 1]
    i = 1: reverse row 1 -> [2, 5, 8] becomes [8, 5, 2]
    i = 2: reverse row 2 -> [3, 6, 9] becomes [9, 6, 3]

    Final Rotated Matrix:
    7 4 1
    8 5 2
    9 6 3
    */
}


int main() {
    // Initialize a 3x3 matrix
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Call the rotate function to rotate the matrix in-place
    rotate(arr);
    
    // Print the final rotated matrix
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n"; // Use "\n" for a new line for better readability
    }

}