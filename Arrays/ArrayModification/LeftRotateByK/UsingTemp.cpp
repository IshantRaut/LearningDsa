#include<iostream>
using namespace std;

//APPROACH

//Step 1:- copu the last k element in temp

//Step 2:- Shift n-k elements to the beginning by k position to the right

//Step 3:- Copy the element into the main array from the temp array
void Rotatetoright(int arr[],int n,int k){
    if(n==0){
        return;
    }
    k = k % n;
    if(k > n){
        return;
    }
    int temp[k];
    for(int i = n - k;i< n;i++){
       
        temp[i-n+k] = arr[i];
    }
    for(int i = n-k-1;i>=0;i--){
        
        arr[i+k] = arr[i];
    }
    for(int i =0;i<k;i++){
        arr[i] = temp[i];
    }
}


void Rotatetoleft(int arr[], int n, int k)
{
  if (n == 0)
    return;
  k = k % n;
  if (k > n)
    return;
  int temp[k];
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++)
  {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++)
  {
    arr[i] = temp[i - n + k];
  }
}
int main(){
 int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  Rotatetoright(arr, n, k);
  cout << "After Rotating the elements to right " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

   Rotatetoleft(arr, n, k);
  cout << "After Rotating the elements to left " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}