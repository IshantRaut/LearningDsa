#include <bits/stdc++.h>
using namespace std;



class Solution{
    public:
    int maxProduct(vector<int>& nums){
        int maxProd= nums[0];

        for(int i =0;i<nums.size();i++){
            int prod =1;

        
        for(int j = i;j<nums.size();j++){
            prod *= nums[j];
            maxProd = max(maxProd,prod);
        }
    }
         return maxProd;
    }
   
};

int main() {
    // Sample input
    vector<int> nums = {2, 3, -2, 4};

    // Create Solution object
    Solution sol;

    // Print the result
    cout << sol.maxProduct(nums);

    return 0;
}