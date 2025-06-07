

//Better Approach

// Find the smallest and largest element in the array in a single traversal

// After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.

// Similarly, we would find the largest element which is just smaller than the largest element we just found

// Indeed, this is our second smallest and second largest element.


#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        small=min(small,arr[i]); //1
        large=max(large,arr[i]); // 7
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }

    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}

// Time Complexity: O(N), We do two linear traversals in our array

// Space Complexity: O(1)