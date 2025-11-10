#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[],int n){
    int left=0, right = n-1;
    while(left < right){
        // Find the first '1' from the left
        while(arr[left] == 0 && left < right){
            left++;
        }
        // Find the first '0' from the right
        while(arr[right] == 1 && left < right){
            right--;
        }
        // Swap only if pointers haven't crossed
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}


int main(){
    int arr[8]={1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printArray(arr,8);
    return 0;
}