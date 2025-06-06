//First we will write the algorithm how it will be done

// Step 1: Select the range
// The loop will run forward from 0 to n-1

//Step 2
//In each iteration we will select minimum element

//AFter that we will swap the min ELement

//After all we will find the sorted array

// Note: Here, after each iteration, the array becomes sorted up to the first index of the range. That is why the starting index of the range increases by 1 after each iteration.

//Means in this first we will placed min element at the start and then we will perform operation for toher element

// Time complexity: O(N2), (where N = size of the array), for the best, worst, and average cases.

#include<ioStream>
using namespace std;

void selection_sort(int arr[], int n) {
      for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
         for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (arr[j] < arr[mini])
            {
                /* code */
                mini = j;
            }
            

        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        
    }
     cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}


int main(){
 int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
    
}