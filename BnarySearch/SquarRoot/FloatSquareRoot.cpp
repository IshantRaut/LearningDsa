#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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
double morePrecision(int n ,int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i =0;i<precision; i++){
        factor = factor/10;

        for(double j =ans;j*j<n;j= j + factor){
            ans = j;
        }

    }
    return ans;
}
int sqrtInteger(int x){

return binarySearch(x);
}



int main(){
    int n = 37; // Example input
    // cout<<"Enter the number to find the square root of: ";
    int tempSol = sqrtInteger(n);
    cout<<"ANswer is:"<<morePrecision(n,3,tempSol);
    return 0;
}