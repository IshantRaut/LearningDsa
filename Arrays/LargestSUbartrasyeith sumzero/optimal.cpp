// Include all standard C++ libraries. A common practice in competitive programming for convenience.
#include <bits/stdc++.h>
// Use the standard namespace to avoid writing std:: before every standard library element.
using namespace std;



// This function takes a vector of integers and returns the length of the longest subarray with a sum of 0.
int maxLen(int A[],int n){
    unordered_map<int,int> mp;
    int maxi =0;
    int sum =0;

    for(int i =0;i<n;i++){
        sum += A[i];

        if(sum ==0){
            maxi = i+1;
        }
        else{
            if(mp.find(sum)!= mp.end()){
                maxi = max(maxi,i - mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
    }
    return maxi;
}


int main(){
    int A[] = {9, -3, 3, -1, 6, -5};
    int n = sizeof(A)/sizeof(A[0]);
    cout<< maxLen(A,n) << endl; // Expected output: 5
}