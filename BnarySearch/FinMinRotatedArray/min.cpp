#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the minimum element using binary search
    int findMin(vector<int>& nums) {

        // Initialize low and high pointers
        int low = 0, high = nums.size() - 1;

        // Binary search loop
        while (low < high) {

            // Calculate mid index
            int mid = low + (high - low) / 2;

            // Check which half to discard
            if (nums[mid] > nums[high]) {

                // Minimum lies in right half
                low = mid + 1;

            } else {

                // Minimum lies in left half (including mid)
                high = mid;
            }
        }

        // Return the minimum element
        return nums[low];
    }
};

int main() {

    // Input array
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    // Create object of Solution
    Solution sol;

    // Call function and store result
    int result = sol.findMin(nums);

    // Output the result
    cout << "Minimum element is " << result << endl;

    return 0;
}