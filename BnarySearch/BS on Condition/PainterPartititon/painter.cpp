#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentCount =1;
    int pageSum =0;
    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int painterPartition(vector<int> arr, int n,int m){
    int s =0;
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans= mid;
            e= mid-1;
        }
        else{
            s= mid+1;
        
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    // Using a pre-defined array for demonstration
    vector<int> arr = {5,5,5,5};
    int n = arr.size();
    int m = 2; // NumbepainterPartition
    cout << "Boards: ";
    for (int pages : arr) {
        cout << pages << " ";
    }
    cout << endl;
    cout << "TIme: " << m << endl;

    cout << "Minimum number of boards allocated to a Painter is: " << painterPartition(arr, n, m) << endl;

    return 0;
}