#include <bits/stdc++.h>
using namespace std;



int findAllSubarraysWithGivenSum(vector<int> &arr,int k){
    int n  = arr.size();
    map<int, int> mpp; // Corrected: Specify key and value types for map
    int preSum =0;
    int cnt =0;

    mpp[0]=1;
    for(int i =0;i<n;i++){
        preSum+=arr[i];
        int rem = preSum - k;
        cnt += mpp[rem];
        mpp[preSum]++;
    }
    return cnt;
}


int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}