
// Approach:

// For Rotating Elements to right
// Step 1: Reverse the last k elements of the array

// Step 2: Reverse the first n-k elements of the array.

// Step 3: Reverse the whole array.

#include<iostream>
using namespace std;
void Reverse(int arr[],int start,int end){
    while (start <= end)
    {
        /* code */
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void Rotateeletoright(int arr[],int n ,int k){

Reverse(arr,0,n-k-1);
Reverse(arr,n-k,n-1);
Reverse(arr,0,n-1);

}

// Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k)
{
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}

int main(){
 int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoright(arr, n, k);
  cout << "After Rotating the k elements to right ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
   Rotateeletoleft(arr, n, k);
  cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}