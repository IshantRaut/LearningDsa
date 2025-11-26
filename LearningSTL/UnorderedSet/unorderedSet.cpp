// This line includes the standard C++ library, providing access to a wide range of functions and data structures.
#include<bits/stdc++.h>
// This line allows you to use names for objects and variables from the standard library without the std:: prefix.
using namespace std;

// The main function, where program execution begins.
int main(){
    // Declare an unordered_set named 's' to store unique integers.
    // Elements are not stored in any particular order.
    unordered_set<int> s; 

    // This for loop iterates from 1 to 10.
    for(int i=1;i<= 10;i++){
        s.insert(i); // Insert the value of 'i' into the unordered_set.
    }

    cout << "Size of the unordered_set is: " << s.size() << endl; // Print the number of elements in the set.

    // Use a range-based for loop to iterate through and print the elements of the set.
    // The order of printing is not guaranteed.
    for(auto it: s){
        cout << it << " ";
    }
    cout << endl; // Print a newline for better formatting.

    int n = 2; // Initialize an integer 'n' to 2 to check for its presence.
    // Check if the element '2' exists in the set.
    // find() returns an iterator to the element or s.end() if not found.
    if (s.find(2) != s.end()) 
    {
        cout<< n<< " is  present in the unordered_set"<< endl; // If found, print a confirmation message.
    }
    
    s.erase(s.begin()); // Erase the element pointed to by the begin() iterator. In an unordered_set, this is an arbitrary element.
    cout << "Size of the unordered_set after erasing an element is: " << s.size() << endl; // Print the new size.

    // Check if the unordered set is empty.
    if (s.empty() == false) // empty() returns true if the set has no elements.
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;

    // Clear all elements from the unordered set
    s.clear(); // clear() removes all elements from the set.

    // Display the size after clearing, which will be 0.
    cout << "Size of the unordered set after clearing all the elements: " << s.size(); 
}