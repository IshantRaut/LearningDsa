#include<iostream>
using namespace std;


int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;

    //int mid = (start + end)/2;

//Modified Mid Calculation to avoid Integer Overflow
    int mid = start + (end - start)/2;

while(start<=end){
    if(arr[mid] == key){
        return mid;
    }
    // go to right part
    if(key > arr[mid]){
        start = mid + 1;
    }
    // go to left part
    else{
        end = mid - 1;
    }
    // mid = (start + end)/2;
    mid = start + (end - start)/2;
}
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[6] = {1,3,5,7,9,11};
    int evenIndex = binarySearch(even,6,12);
    cout<<"Index of 12 is : "<<evenIndex<<endl;
    int oddIndex = binarySearch(odd,6,11);
    cout<<"Index of 11 is : "<<oddIndex<<endl;
    return 0;
}