#include<bits/stdc++.h>
using namespace std;
#include<vector>

long long maxSubarraySum(int arr[],int n){
    long long sum =0, maxi= LONG_MIN;

    for(int i =0;i<n;i++){
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }
        if(sum <0){
            sum =0;
        }
    }
    return maxi;
}

int main(){
    // Using a fixed array instead of user input
    vector<int> arr = {-2, -3, 4, -1, 2, 1, 5, -3};
    int n = arr.size();
 
    long long maxSum = maxSubarraySum(arr.data(), n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
}