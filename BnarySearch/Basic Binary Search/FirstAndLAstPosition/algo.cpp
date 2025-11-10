#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int firstOcc(vector<int>& arr, int n, int k) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            ans = mid;
            e = mid - 1; // Check on the left side for an earlier occurrence
        } else if (k > arr[mid]) {
            s = mid + 1;
        } else { // k < arr[mid]
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int k) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k) {
            ans = mid;
            s = mid + 1; // Check on the right side for a later occurrence
        } else if (k > arr[mid]) {
            s = mid + 1;
        } else { // k < arr[mid]
            e = mid - 1;
        }
    }
    return ans;
}

pair<int,int> firstAndLastPosition(vector<int>& arr,int n ,int k){
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}


int main(){
    vector<int> arr = {0, 1, 1, 2, 2, 2, 2, 3, 4, 4, 5};
    int n = arr.size();
    int k = 2; // Hardcoded the element to find

    pair<int,int> result = firstAndLastPosition(arr,n,k);
    cout<<"First Position: "<<result.first<<endl;
    cout<<"Last Position: "<<result.second<<endl;

    return 0;
}