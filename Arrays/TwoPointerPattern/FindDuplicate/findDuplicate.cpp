#include<iostream>
#include<vector>
#include<numeric> // Required for std::accumulate

// This function finds a duplicate in an array of size n
// containing numbers from 1 to n-1, where exactly one number is repeated.
int findDuplicate(const std::vector<int>& nums){

    int ans = 0;
    // 1. XOR all the elements in the vector
    for(int num : nums){
        ans ^= num;
    }
    
    // 2. XOR with all numbers from 1 to size-1
    // The array has 'n' elements, so the range of unique numbers is [1, n-1].
    for(int i = 1; i < nums.size(); i++){
        ans ^= i;
    }
    return ans;

}

int main(){
    std::vector<int> arr = {1,2,3,4,5,3};
    std::cout << "Duplicate element is: " << findDuplicate(arr) << std::endl;
    return 0;
}