#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getPivot(int arr[],int n){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >=arr[0]){
            s = mid+1;
        }else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int binarySearch(vector<int>& arr, int s, int e, int target) {
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int findPosition(vector<int>& arr,
    int n, int k) {
    int pivot =getPivot(arr.data(),n);
    if(k >= arr[pivot] && k <= arr[n-1]){ // This line is causing an error
        return binarySearch(arr,pivot,n-1,k);
    }else{
        return binarySearch(arr,0,pivot-1,k);
    }
}

int main(){
    int arr[5]={3,1,8,10,17};
    vector<int> rotatedArr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = rotatedArr.size();
    int target = 3;
    int result = findPosition(rotatedArr, n, target);
    if (result != -1) { 
        cout << "Target " << target << " found at index: " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }


}