#include <bits/stdc++.h>
using namespace std;

string twoSum(int n,vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = n - 1;

    while(left < right){
        int aum = arr[left] + arr[right];
        if(aum == target){
            return "YES";
        }
        else if(aum < target){
            left++;
        }
        else{
            right--;
        }
    return "NO";
    }
}



int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}