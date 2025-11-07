#include <bits/stdc++.h>
using namespace std;

//   int findKRotation(vector<int>& nums) {

//         // Initialize low and high pointers
//         int low = 0, high = nums.size() - 1;
// int index=-1;
//         // Binary search loop
//         while (low < high) {

//             // Calculate mid index
//             int mid = low + (high - low) / 2;

//             // Check which half to discard
//             if (nums[mid] > nums[high]) {

//                 // Minimum lies in right half
//                 low = mid + 1;
//                 index=low;
//             } else {

//                 // Minimum lies in left half (including mid)
//                 high = mid;
//             }
//         }

//         // Return the minimum element
//         return index;
//     }


int findKRotation(vector<int> &arr){
    int low =0, high = arr.size()-1;
    int ans = INT_MAX;
    int index = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[low] <= arr[high]){
            if(arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            break;
        }
        //Left Part is sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }else{
            if(arr[mid] < ans){
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return index;
}


int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findKRotation(nums);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}