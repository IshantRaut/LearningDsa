#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
    
public:
int binarySearch(int n){
    int s =0;
    int e = n;
    long long int mid=s+(e-s)/2;
long long int ans =-1;
    while(s<=e){
       long long int sq = mid*mid;
        if(sq==n){
            return mid;
        }
        if(sq<n){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int mySqrt(int x){
return binarySearch(x);
}
};

int main(){
    Solution obj;
    int x = 1000000; // Example input
    // cout<<"Enter a number to find its square root: ";
    // cin>>x;
    int result = obj.mySqrt(x);
    cout<<"The square root of "<<x<<" is: "<<result<<endl;
    return 0;
}