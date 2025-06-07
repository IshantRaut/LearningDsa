//Apprach

//Step 1: Create max variable ad initilaize with arr[0]

//STep 2: Use a loop and compare it wiht other element of the array

//Step 3: If any element is greater than max value wiht element value and then print max value


#include <iostream>
using namespace std;


int findLargestElement(int arr[], int n) {
    int max = arr[0];

    for (int  i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] > max)
        {
            /* code */
            max = arr[i];
        }
        
    }
    
    return max;
}


int findSmallestElement(int arr[], int n) {
    int min= arr[0];

    for (int  i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] < min)
        {
            /* code */
            min = arr[i];
        }
        
    }
    
    return min;
}

int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  

    int arr3[] =  {8,10,5,7,9};
  n = 5;
  int min = findSmallestElement(arr3, n);
  cout << "The Smallest element in the array is: " << min<<endl;

  int arr5[] =  {2,5,1,3,0};
  n = 5;
  min = findSmallestElement(arr5, n);
  cout << "The Smallest element in the array is: " << min<<endl;
  return 0;
}



// Time Complexity: O(N)

// Space Complexity: O(1)